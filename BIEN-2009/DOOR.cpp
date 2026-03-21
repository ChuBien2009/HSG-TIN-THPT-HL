#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("file.INP", "r", stdin);
    freopen("file.OUT", "w", stdout);
    
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> dp(k+1);
    dp[0] = 1;
    for(int  i = 0; i < n; i++){
        for(int j = k; j >= a[i]; j--){
            if(dp[j - a[i]] > 0)  dp[j] += dp[j-a[i]];
        }
    }
    cout << dp[k];
    return 0;
}