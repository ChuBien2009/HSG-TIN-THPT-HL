#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("VETAU.INP","r",stdin);
    freopen("VETAU.OUT","w",stdout);
    ll m,n,k;cin>>m>>n>>k;
    if(!cin){cerr<<"Error opening file\n";return 1;}
    vector<vector<bool>> st(m+1,vector<bool>(n+1,false));
    for(ll i=0;i<k;i++){
        ll t,g;cin>>t>>g;
        if(t<1||t>m||g<1||g>n){cout<<"INVALID\n";continue;}
        if(st[t][g]) cout<<"FAIL\n";
        else{cout<<"SUCCESS\n";st[t][g]=true;}
    }
    return 0;
}