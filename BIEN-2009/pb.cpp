#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int n, p; cin >> n >> p;
        vector<int> a;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        int cnt = 0;
        for(auto s:a){
            if(s <= p){
                p -= s;
                cnt++;
            }
        }
        cout << cnt;
    }
    return 0;
}