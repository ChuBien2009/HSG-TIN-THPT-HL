#include <bits/stdc++.h>
#define ll long long
using namespace std;
using str=string;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    str s;cin>>s;ll n=s.length();
    vector<ll> cnt(26,0);
    for(char c:s) cnt[c-'a']++;
    ll to=n*(n-1)/2;
    ll same=0;for(ll i=0;i<26;i++){
        if(cnt[i]>1) same+=cnt[i]*(cnt[i]-1)/2;
    }
    ll res=to-same+1;
    cout<<res<<endl;
    return 0;
}