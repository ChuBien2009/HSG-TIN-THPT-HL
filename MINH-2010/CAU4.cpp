#include <bits/stdc++.h>
#define ll long long
using namespace std;
using str = string;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("CAU4.INP","r",stdin);
    freopen("CAU4.OUT","w",stdout);
    ll n;cin>>n;vector<ll>res;
    for(ll i=1;i<=n;i++){
        ll ans=0;
        for(ll j=0;j<n;j++){ll x;cin>>x;ans+=x;}
        res.push_back(ans);
    }
    cout<<*max_element(res.begin(),res.end())<<'\n';
    return 0;
}