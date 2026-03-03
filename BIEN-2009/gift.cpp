#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >> k;
    vector<int> a(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<int> dplen(n+1,1), dpsum(n+1,0),trace(n+1,-1);
    for(int i = 1; i <= n; i++){
        dpsum[i] = a[i];
        for(int j = 1; j < i; j++){
            if(a[i] > a[j]){
                if(dplen[i] < dplen[j] + 1 || (dplen[i] == dplen[j] + 1 && dpsum[i] < dpsum[j] + a[i])){
                    dplen[i] = dplen[j] + 1;
                    dpsum[i] = dpsum[j] + a[i];   
                    trace[i] = j;          
                } 
            }
        }
    }
    int idx, best = 0;
    for(int i = 1; i <= n; i++){
        if(dpsum[i] > k){
            if(dplen[i] > best){
                best = dplen[i];
                idx = i;
            }
        }
    }
    vector<int> ans;
    while(idx != -1){
        ans.push_back(a[idx]);
        idx = trace[idx];
    }
    if((ans.empty())){
        cout << "-1";
        return 0;
    }
    for(int i = ans.size() - 1; i >= 0; i--){
        cout << ans[i] << " ";
    }
    return 0;
}