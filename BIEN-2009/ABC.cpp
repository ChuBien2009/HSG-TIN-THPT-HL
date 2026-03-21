#include <bits/stdc++.h>
using namespace std;
long long gt(int n){
    int res = 1;
    for(int i = 2; i <= n; i++){
        res *= i;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("file.INP", "r", stdin);
    freopen("file.OUT", "w", stdout);
    int n; cin >> n;
    unordered_map<int,int> mp;
    set<int> b;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int x,y; cin >> x >> y;
        int res = x - y;
        b.insert(res);
        mp[res]++;
    }
    int cnt = 0;
    for(int i : b){
        if(mp[i] >= 3){
            int k = gt(mp[i]);
            cnt += k / (6*gt(mp[i] - 3));
        }
    }
    cout << cnt;
    return 0;   
}