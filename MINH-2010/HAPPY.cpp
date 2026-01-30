#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MOD=1e9+7;
vector<vector<ll>> multi(const vector<vector<ll>>&a,const vector<vector<ll>>&b){
    vector<vector<ll>> c(2,vector<ll>(2,0));
    for(ll i=0;i<2;i++){
        for(ll j=0;j<2;j++){
            for(ll k=0;k<2;k++)
                c[i][j]=(c[i][j]+a[i][k]*b[k][j])%MOD;
        }
    }
    return c;
}
vector<vector<ll>> indent(){
    vector<vector<ll>> i(2,vector<ll>(2,0));
    i[0][0]=1;i[1][1]=1;
    return i;
}
vector<vector<ll>> marx(vector<vector<ll>> m,ll n){
    if(n==0) return indent();
    if(n==1) return m;
    vector<vector<ll>> half=marx(m,n/2),res=multi(half,half);
    if(n%2==1) res=multi(res,m);
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin>>n;
    vector<vector<ll>> m={{19,7},{6,20}};
    vector<ll> dp={0,1},dp_fi(2,0);
    vector<vector<ll>> mn=marx(m,n);
    for(ll j=0;j<2;j++){
        for(ll i=0;i<2;i++) dp_fi[j]=(dp_fi[j]+dp[i]*mn[i][j])%MOD;
    }
    cout<<dp_fi[1]<<"\n";
    return 0;
}