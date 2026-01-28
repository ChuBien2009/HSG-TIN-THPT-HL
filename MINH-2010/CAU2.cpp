#include <bits/stdc++.h>
#define ll long long
using namespace std;
using str = string;
bool palindrome(const str&s){
    ll l=0,r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r]) return false;
        l++;r--;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("CAU2.INP","r",stdin);
    freopen("CAU2.OUT","w",stdout);
    str s;cin>>s;
    if(palindrome(s)) cout<<"YES\n";
    else cout<<"NO\n";
}