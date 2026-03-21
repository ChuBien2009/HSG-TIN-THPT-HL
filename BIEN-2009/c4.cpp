#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int cnt = 0, n, s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("file.INP", "r", stdin);
    // freopen("file.OUT", "w", stdout);
    cin >> n >> s;
    a.resize(n);
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    vector<int> dp(s+1,0);
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = s; j >= a[i]; j--){
            if(dp[j-a[i]] > 0) dp[j] += dp[j-a[i]];
        }
    }
    cout << dp[s];
    return 0;
}