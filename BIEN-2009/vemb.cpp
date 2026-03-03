#include <bits/stdc++.h>
using namespace std;
struct tv
{
    int r,c;
};

int main(){
    int n,m; cin >> n >> m;
    vector<vector<int>> a (n+1, vector<int> (m+1));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    int q; cin >> q;
    vector<tv> b(q+1);
    for(int i = 1; i <= q; i++){
        cin >> b[i].r >> b[i].c;
    }
    vector<string> ans;
    for(int i = 1; i <= q; i++){
        if(b[i].r > n || b[i].r < 1 || b[i].c < 1 || b[i].c > m){
            ans.push_back("Invalid position");
            continue;
        }
        if(a[b[i].r][b[i].c] == 1){
            ans.push_back("Not available");
        }else if(a[b[i].r][b[i].c] == 0){
            ans.push_back("Available");
        }
    }
    for(string x : ans){
        cout << x << endl;
    }
    return 0;
}