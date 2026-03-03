#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    unordered_map<char,int> mp,check;
    for(int i = 0; i < s.size(); i++){
        if(mp.count(s[i])){
            mp[s[i]]++;
        }else{
            mp[s[i]] = 1;
        }
    }
    int ans = 1;
    for(int i = 0; i < s.size(); i++){
        if(check.count(s[i])){
            continue;
        }else{
            check[s[i]] = 1;
            ans += (s.size() - mp[s[i]]);
        }
    }
    cout << ans;
    return 0;
}