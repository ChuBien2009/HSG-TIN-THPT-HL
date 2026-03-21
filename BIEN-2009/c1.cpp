#include <bits/stdc++.h>
using namespace std;
long long maxv = 1000000;
vector<bool> snt(maxv+1, true);
vector<int> isprime;
void sang(){
    snt[0] = snt[1] = false;
    for(int i = 2; i*i <= maxv; i++){
        if(snt[i]){
            for(int j = i*i; j <= maxv; j+=i){
                snt[j] = false;
            }
        }
    }
    for(int i = 2; i <= maxv; i++){
        if(snt[i]){
            isprime.push_back(i);
        }
    }
    return;
}
bool prime(long long n){
    for(auto x:isprime){
        if(1LL*x*x > n) break;
        if(n%x == 0) return false;
    }
    return true;
}
int sum(long long x){
    int res = 0;
    while(x > 0){
        res += x%10;
        x /= 10;
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("file.INP", "r", stdin);
    // freopen("file.OUT", "w", stdout);
    sang();
    int n; cin >> n; 
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        if(prime(x) && prime(sum(x))){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}