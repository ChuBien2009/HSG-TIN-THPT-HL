#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    int res = 0;
    while(n > 0){
        res += n%10;
        n /= 10;
    }
    return res;
}
int main(){
    int n; cin >> n;
    vector<int> a(n);
    int maxv = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        maxv = max(maxv, a[i]);
    }
    vector<bool> snt(maxv+1,true);
    snt[0] = snt[1] = false;
    int limit = sqrt(maxv);
    for(int i = 2; i <= limit; i++){
        if(snt[i]){
            for(int j = i*i; j <= maxv; j+=i){
                snt[j] = false;
            }
        }
    }
    int cnt = 0;
    for(auto s:a){
        if(snt[s] && snt[sum(s)]){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}