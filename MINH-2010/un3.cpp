#include <bits/stdc++.h>
#define ll long long
using namespace std;
using str=string;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin>>n;vector<ll> a(n),pre(n+1);
    for(ll&x:a) cin>>x;
    for(ll i=0;i<n;i++) pre[i+1]=pre[i]+a[i];
    ll m;cin>>m;vector<ll> b(m);
    for(ll&y:b) cin>>y;
    for(ll j=0;j<m;j++){
        ll l=1,r=n,ans=0;
        while (l<=r){
            ll mid=(l+r)/2;
            if(b[j]<=pre[mid]){ans=mid;r=mid-1;}
            else l=mid+1;
        }
        cout<<ans<<" ";
    }
    return 0;
}
