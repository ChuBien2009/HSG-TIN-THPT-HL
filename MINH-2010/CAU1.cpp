#include <bits/stdc++.h>
#define ll long long
using namespace std;
using str = string;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("CAU1.INP","r",stdin);
    freopen("CAU1.OUT","w",stdout);
    ll n,res=0;cin>>n;vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%3==0) res+=arr[i];
    }
    cout<<res<<'\n';
    return 0;
}