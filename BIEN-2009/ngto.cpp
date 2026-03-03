#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    int res = 0;
    while(n > 0){
        res += n % 10;
        n /= 10;
    }
    return res;
}
int main(){
    int a,b; cin >> a >> b;
    vector<bool> snt(b+1,true);
    snt[0] = snt[1] = false;
    int limit = sqrt(b);
    for(int i = 2; i <= limit; i++){
        if(snt[i]){
            for(int j = i*i; j <= b; j+=i){
                snt[j] = 0;
            }
        }
    }
    vector<int> ans;
    for(int i = a; i <= b; i++){
        if(snt[i] && snt[sum(i)]){
            ans.push_back(i);
        }
    }
    if(ans.empty()){
        cout << "-1";
    }else{
        for(auto x : ans){
            cout << x << " ";
        }
    }
    return 0;
}