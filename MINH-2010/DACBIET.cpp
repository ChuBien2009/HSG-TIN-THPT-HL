#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sum(ll n){
    ll res=n%10;n/=10;
    while(n>0){res+=n%10;n/=10;}
    return res;
}
ll prdi(ll x){
    ll pr=1;
    while(x>0){pr*=(x%10);x/=10;}
    return pr;
}
bool has0(ll n){
    if(n==0) return true;
    while(n>0){
        if(n%10==0) return true;
        n/=10;
    }
    return false;
}
bool isphi(ll n){
    if(has0(n)) return false;
    set<ll> prfunc;ll te=n;
    if(te%2==0){
        prfunc.insert(2);
        while(te%2==0) te/=2;
    }
    for(ll i=3;i*i<=te;i+=2){
        if(te%i==0){
            prfunc.insert(i);
            while(te%i==0) te/=i;
        }
    }
    if(te>1) prfunc.insert(te);
    ll s=0,p=prdi(n);
    for(ll fac:prfunc) s+=sum(fac);
    return s==p;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin>>n;ll i=n+1;
    while(true){
        if(isphi(i)){cout<<i<<"\n";return 0;}
        i++;
    }
    return 0;
}