// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// using str=string;
// ll sum(str s,ll sum=0){for(char c:s) sum+=c-'0';return sum;}
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll n,res=0;cin>>n;vector<ll> ans;
//     for(ll i=10;i<=n;i++){
//         str s=to_string(i);
//         if(s.length()%2!=0) continue;
//         if((s[0]-'0')%2==0) continue;
//         if(s.find('7')==string::npos) continue;
//         if(sum(s)%5!=0) continue;
//         res++;ans.push_back(i);
//     }
//     if(ans.empty()) cout<<"None";
//     else for(ll x:ans) cout<<x<<" ";
//     cout<<"\nTong:"<<res<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// using str=string;
// int main(){
//     ll n,m;cin>>n>>m;vector<ll> a(n);
//     for(ll&x:a) cin>>x;
//     sort(a.begin(),a.end(),greater<ll>());
//     ll sum=0;
//     for(ll i=0;i<n;i++){
//         sum+=a[i];
//         ll use=sum-i;
//         if(use>=m){cout<<i+1;return 0;}
//     }
//     cout<<"-1\n";
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
using namespace std;
using str=string;
struct custom{ll id,st,end,money;};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin>>n;vector<custom> cus(n);
    for(ll i=0;i<n;i++){
        cin>>cus[i].st>>cus[i].end>>cus[i].money;
        cus[i].id=i+1;
    }
    sort(cus.begin(),cus.end(),[](const custom&a, const custom&b){return a.end < b.end;});
    vector<ll> p(n,-1),dp(n);
    for(ll i=0;i<n;i++){
        for(ll j=i-1;j>=0;j--){
            if(cus[j].end<=cus[i].st){p[i]=j;break;}
        }
    }
    vector<bool> cse(n,false);
    if(n>0){
        dp[0]=cus[0].money;
        cse[0]=true;
        for(ll i=1;i<n;i++){
            ll csen=dp[i-1];
            ll csei=cus[i].money;
            if(p[i]!=-1) csei+=dp[p[i]];
            if(csei>csen){dp[i]=csei;cse[i]=true;}
            else{dp[i]=csen;cse[i]=false;}
        }
    }
    vector<ll> setlec;ll i=n-1;
    while(i>=0){
        if(cse[i]){setlec.push_back(cus[i].id);i=p[i];}
        else i--;
    }
    reverse(setlec.begin(),setlec.end());
    cout<<setlec.size()<<" "<<dp[n-1]<<"\n";
    for(ll x:setlec) cout<<x<<" ";
    return 0;
}
//     // Bước 5: Truy vết
//     selected = []
//     i = N-1
//     while i >= 0:
//         if choose[i]:
//             thêm customers[i].id vào selected
//             i = p[i]  // nhảy về khách không giao nhau trước đó
//         else:
//             i = i - 1
    
//     // selected hiện theo thứ tự ngược (từ cuối lên đầu)
//     đảo_ngược selected
    
//     // Bước 6: Ghi kết quả
//     tổng_khách = độ_dài(selected)
//     tổng_tiền = dp[N-1] nếu N>0, else 0
    
//     ghi tổng_khách và tổng_tiền vào THUEMAY.OUT
//     ghi selected (cách nhau khoảng trắng) vào dòng thứ 2
