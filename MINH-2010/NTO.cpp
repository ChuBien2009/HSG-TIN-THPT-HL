#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll INF=1e6;
vector<ll> nt(INF+5,true);
void seive(){
    nt[0]=nt[1]=false;
    for(ll i=2;i*i<=INF;i++){
        if(nt[i]){
            for(ll j=i*i;j<=INF;j+=i) nt[j]=false;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);seive();
    ll n,l1=-1,l2=-1;cin>>n;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        if(x>=0&&x<=INF&&nt[x]){
            if(l1==-1) l1=x;
            else if(x>l1){l2=l1;l1=x;}
            else if(x>l2) l2=x;
        }      
    }
    if(l1==-1||l2==-1) cout<<"-1\n";
    else cout<<l1+l2<<"\n";
    return 0;
}