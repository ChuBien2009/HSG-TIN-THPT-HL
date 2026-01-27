// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// using str=string;
// const ll N=100000;
// bool arr(const array<ll,4>&a,const array<ll,4>&b){return a[0]>b[0];}
// struct fen{
//     ll n;vector<ll>bit;
//     void init(ll n_){n=n_;bit.assign(n+1,0);}
//     fen(ll n=0){init(n);}
//     void add(ll idx,ll val){
//         for(;idx<=n;idx+=idx&-idx) bit[idx]+=val;
//     }
//     ll sum(ll idx) const{
//         ll s=0;
//         for(;idx>0;idx-=idx&-idx)s+=bit[idx];
//         return s;
//     }
//     ll range(ll l,ll r)const{
//         if(l>r) return 0;
//         return sum(r)-sum(l-1);
//     }
// };
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     vector<ll> f(N+1,0);
//     for(ll i=1;i<=N;i++){
//         for(ll j=i*2;j<=N;j+=i){f[j]+=i;}
//     }
//     vector<pair<ll,ll>> a;
//     a.reserve(N);
//     for(ll i=1;i<=N;i++){a.emplace_back(f[i],i);}
//     sort(a.begin(),a.end(),greater<>());
//     ll q;cin>>q;
//     vector<array<ll,4>> que;
//     que.reserve(q);
//     for(ll i=0;i<q;i++){
//         ll l,r,x;cin>>l>>r>>x;
//         que.push_back({x,l,r,i});
//     }
//     sort(que.begin(),que.end(),arr);
//     fen bit(N);vector<ll> res(q,0);ll ptr=0;
//     for(const auto&q:que){
//        ll x=q[0],l=q[1],r=q[2],id=q[3];
//        while(ptr<N&&a[ptr].first>x){bit.add(a[ptr].second,1);ptr++;}
//         res[id]=bit.range(l,r);
//     }
//     for(ll x:res) cout<<x<<"\n";
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
using namespace std;
using str=string;
bool cm(const str&a,const str&b){return (a+b)>(b+a);}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin>>n;
    vector<str> fac;str s;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            fac.push_back(to_string(i));
        }
    }
    
}