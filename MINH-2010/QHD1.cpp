#include <bits/stdc++.h>
#define ll long long
using namespace std;
using str = string;
ll powmod(ll x,ll n,ll c) {
    ll res = 1%c;
    while(n>0) {
        if(n&1) res =(__int128_t)res*x%c;
        x = (__int128_t)x*x%c;
        n>>=1;
    }
    return res;
}
ll modpowl(const str& a_str, const str&b_str, ll c){
    ll a_mod = 0;
    for (char ch : a_str) a_mod = ((__int128_t)a_mod * 10 + (ch - '0')) % c;
    ll res = 1 % c;
    for (char ch : b_str) {
        int digit = ch - '0';
        res = powmod(res, 10, c);
        res = (__int128_t)res * powmod(a_mod, digit, c) % c;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    str a_str,b_str;ll c;
    cin>>a_str>>b_str>>c;
    cout<<modpowl(a_str,b_str,c)<<'\n';
    return 0;
}