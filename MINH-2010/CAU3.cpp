#include <bits/stdc++.h>
#define ll long long
using namespace std;
using str = string;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("CAU3.INP","r",stdin);
    freopen("CAU3.OUT","w",stdout);
    str s;
    while (getline(cin,s)){
        stringstream ss(s);
        ll num,res=0;
        while(ss>>num){
            res+=num;
        }
        cout<<res<<'\n';
    }   
    return 0;
}