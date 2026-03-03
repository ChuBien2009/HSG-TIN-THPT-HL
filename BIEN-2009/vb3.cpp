#include <bits/stdc++.h>
using namespace  std;
vector<bool> snt(1000001, true);
void sang(){
    snt[0] = snt[1] = false;
    int limit = sqrt(1000000);
    for(int i = 2; i <= limit; i++){
        if(snt[i]){
            for(int j = i*i; j <= 1000000; j += i){
                snt[j] = false;
            }
        }
    }
    snt[2] = snt[3] = snt[5] = snt[7] = false;
    return;
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int maxdigit = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sang();
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(snt[a[i]]){
            ans++;
        }
    }
    cout << ans;
    return 0;
}