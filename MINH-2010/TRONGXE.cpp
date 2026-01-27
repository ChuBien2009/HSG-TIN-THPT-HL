#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll k;cin>>k;
    unordered_map<ll,ll> co;
    for(ll i=0;i<k;i++){ll id;cin>>id;co[id]++;}
    ll to=0;for(auto&[id,p]:co){
        if(p<=5) to+=100;
        else to+=100+(p-5);
    }
    cout<<to<<"\n";
    return 0;
}