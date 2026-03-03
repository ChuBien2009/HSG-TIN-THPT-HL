#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s;
    vector<string> ss;
    unordered_map<string,int> mp;

    for(int i = 1; i <= n; i++){
        cin >> s;
        if(mp.count(s)){
            mp[s]++;
        }else{
            mp[s] = 1;
            ss.push_back(s);
        }
    }
    int ans = 0;
    for(int i = 0; i < ss.size(); i++){
        if(mp[ss[i]] > 5){
            ans += (100 + (mp[ss[i]] - 5));
        }else{
            ans += 100;
        }
    }
    cout << ans;
    return 0;
}