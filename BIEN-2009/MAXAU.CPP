#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            s[i] = char('0' + ('9' - s[i]));
        }
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = char('a' + ('z' - s[i]));
        }
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = char( 'A' + ('Z' - s[i]));
        }
    }
    cout << s << endl;
    unordered_map<char, int> mp,a;
    for(int i = 0; i < s.size(); i++){
        if(mp.count(s[i])){
            mp[s[i]]++;
        }else{
            mp[s[i]] = 1;
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(a.count(s[i]) == false){
            cout << s[i] << ":" << mp[s[i]] << endl;
            a[s[i]] = 1;
        }
    }
    return 0;
}