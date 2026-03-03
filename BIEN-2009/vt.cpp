#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n, k; cin >> m >> n >> k;
    vector<pair<int,int>> a(k);
    for(int i = 0; i < k; i++){
        cin >> a[i].first >> a[i].second;
    }
    vector<vector<bool>> train(m+1, vector<bool> (n+1,true));
    vector<string> ans(k);
    for(int i = 0; i < k; i++){
        if(a[i].first <= m && a[i].first > 0 && a[i].second <= n && a[i].second > 0){
            if(train[a[i].first][a[i].second]){
                train[a[i].first][a[i].second] = false;
                ans.push_back("SUCCESS");
            }else{
                ans.push_back("FAIL");
            }
        }else{
            ans.push_back("INVALID");
        }
    }
    for(string a:ans){
        cout << a << endl;
    }
    return 0;
}