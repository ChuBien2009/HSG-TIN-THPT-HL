#include <bits/stdc++.h>
#define ll long long
using namespace std;
using str=string;
const ll INF=1e6;
vector<bool> nt(INF+5,true);
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
    ll n,res=0,k;cin>>n>>k;
    for(ll i=2;i<=n;i++){
        if(nt[i]&& __builtin_popcount(i)==k) res++;
    }
    cout<<res<<"\n";
    return 0;
}