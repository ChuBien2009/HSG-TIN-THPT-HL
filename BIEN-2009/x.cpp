#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("GIAOHANG.INP","r",stdin);
    // freopen("GIAOHANG.OUT","w",stdout);

    int n, w; cin >> n >> w;
    vector<int> W(n+1,0), V(n+1,0);
    for(int i = 1; i <= n;i++){
        cin >> W[i] >> V[i];
    }
    vector<vector<long long>> dp(n+1, vector<long long> (w+1,0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= w; j++){
            dp[i][j] = dp[i-1][j];
            if(j >= W[i]){
                dp[i][j] = max(dp[i-1][j],dp[i-1][j - W[i]] + V[i]);
            }
        }
    }
    cout << dp[n][w];
    return 0;
}