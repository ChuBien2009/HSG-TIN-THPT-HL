#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b) {
    if (a == 0 || b == 0) return max(a, b);
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
ll phi(ll n){
    ll res=n;
    if(n%2==0){
        res-=res/2;
        while(n%2==0) n/=2;
    }
    for(ll i=3;i*i<=n;i+=2){
        if(n%i==0){
            res-=res/i;
            while(n%i==0) n/=i;
        }
    }
    if(n>1) res-=res/n;
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("DIVINAT.INP","r",stdin);
    // freopen("DIVINAT.OUT","w",stdout);
    ll n;cin>>n;
    cout<<phi(n)<<"\n";
    return 0;
}
