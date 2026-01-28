// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// using str=string;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll n; cin >> n;vector<ll> a(n), res1;
//     for(ll &x : a) cin >> x;
//     for(ll i=0;i<n;i++)
//         if(a[i]>80) res1.push_back((i+1)*10);
//     ll max_len=0, _len=0, st_time=0, be_st=0, be_end=0;
//     for(ll i=0;i<n;i++){
//         if(a[i]>60){ 
//             if(_len==0) st_time = i*10; 
//             _len++;
//         } else {
//             if(_len > max_len){
//                 max_len = _len;
//                 be_st = st_time;
//                 be_end = i*10; 
//             }
//             _len = 0; 
//         }
//     }
//     if(_len > max_len){
//         max_len = _len;
//         be_st = st_time;
//         be_end = n*10;
//     }
//     ll max_in=-1e7, fr_time=0, to_time=0;
//     for(ll i=1;i<n;i++){
//         ll in = a[i]-a[i-1];
//         if(in > max_in){
//             max_in = in;
//             fr_time = i*10;
//             to_time = (i+1)*10;
//         }
//     }
//     if(res1.empty()) cout<<"Các thời điểm vượt 80 km/h: 没有\n";
//     else{cout<<"Các thời điểm vượt 80 km/h: ";for(ll t:res1) cout<<t<<"s ";cout<<endl;}
//     if(max_len==0) cout<<"Đoạn chạy >60 km/h dài nhất: 没有\n";
//     else{cout<<"Đoạn chạy >60 km/h dài nhất: Bắt đầu tại: "<<be_st<<"s ; Kết thúc tại: "<<be_end<<"s ; Độ dài: "<<max_len<<" điểm ("<<(max_len*10)<<"s)\n";}
//     if(max_in <=0) cout<<"Tăng tốc mạnh nhất: 没有\n";
//     else cout<<"Tăng tốc mạnh nhất: Từ "<<fr_time<<"s đến "<<to_time<<"s: +"<<max_in<<" km/h\n";
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
using namespace std;
using str=string;
vector<ll> special;
int main(){
    freopen("SODB.INP","r",stdin);
    freopen("SODB.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(ll le=1;le<=9;le++){
        for(ll di=1;di<=9;di++){
            ll num=0;
            for(ll i=1;i<=le;i++) num=num*10+di;
            special.push_back(num);
        }
    }
    ll t;cin>>t;
    for(ll nt=1;nt<=t;nt++){
        ll n,l=0,r=special.size()-1,pos=-1;cin>>n;
        while(l<=r){
            ll mid=(l+r)/2;
            if(special[mid]<=n){pos=mid;l=mid+1;}
            else r=mid-1;
        }
        ll co=pos+1;
        cout<<co<<endl;
    }
    return 0;
}