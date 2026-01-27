#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll daongc(ll n) {
    ll reversed = 0;
    ll temp = n;  
    while (temp > 0) {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }
    return reversed;
}
int main(){
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll n,res=0;cin>>n;
    for(ll i=1;i<n;i++){
        ll i1=daongc(i);
        if(__gcd(i,i1)==1) res++;
    }
    cout<<res<<"\n";
    return 0;
}