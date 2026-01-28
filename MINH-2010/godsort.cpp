#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin>>n;vector<ll> a(n),pre(n+1,0);
    for(ll&x:a)cin>>x;
    for(ll i=0;i<n;i++)pre[i+1]=pre[i]+a[i];
    ll b,res=0;cin>>b;vector<ll> c(b);
    for(ll&x:c)cin>>x;
    for(ll j=0;j<b;j++){
        ll l=1,r=n,ans=0;
        while(l<=r){
            ll mid=(l+r)/2;
            if(c[j]<=pre[mid]){ans=mid;r=mid-1;}
            else l=mid+1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}