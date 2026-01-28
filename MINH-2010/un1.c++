#include <bits/stdc++.h>
#define ll long long
using namespace std;
using str=string;
struct un1{str name;ll math,it,to,rank,id;};
bool total(const un1&a,const un1&b){return a.to>b.to;}
bool id(const un1&a,const un1&b){return a.id<b.id;}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin>>n;vector<un1> stu(n);
    for(ll i=0;i<n;i++){
        cin>>stu[i].name>>stu[i].math>>stu[i].it;
        stu[i].to=stu[i].math+stu[i].it;
        stu[i].id=i;stu[i].rank=0;
    }
    sort(stu.begin(),stu.end(),total);
    ll curank=1;
    for(ll i=0;i<n;i++){
        if(i>0&&stu[i].to<stu[i-1].to) curank=i+1;
        stu[i].rank=curank;
    }
    sort(stu.begin(),stu.end(),id);
    for(ll i=0;i<n;i++) cout<<stu[i].name<<" "<<stu[i].rank<<"\n";
    return 0;
}