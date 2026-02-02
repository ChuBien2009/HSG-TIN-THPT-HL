#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    unordered_map<int,int> mp;
    int ans = 0;
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            sum = sum * 10 + (s[i] - '0');
        }else{
            if(mp.count(sum) == false){
                ans++;
                mp[sum] = 1;
                
            }
            sum = 0;
        }
    }
    if(mp.count(sum) == false){
        ans++;
    }
    cout << ans;
    return 0;
}