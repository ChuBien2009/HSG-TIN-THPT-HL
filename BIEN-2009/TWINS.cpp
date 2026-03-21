#include <bits/stdc++.h>
using namespace std;
long long maxv = sqrt(100000000);
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
int rev(int n){
    int res = 0;
    while(n > 0){
        res = res * 10 + (n%10);
        n /= 10;
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("file.INP", "r", stdin);
    freopen("file.OUT", "w", stdout);
    int t; cin >> t;
    sang();
    while(t > 0){
        int a,b; cin >> a >> b;
        int sum = 0, cnt = 0;
        for(int i = a; i <= b; i++){
            if(prime(i)){
                sum += i;
                if(prime(rev(i)) && i != rev(i)){
                    cnt++;
                }
            }
        }
        cout << sum << " " << cnt << endl;
        t--;
    }
    return 0;
}