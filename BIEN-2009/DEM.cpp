#include <bits/stdc++.h>
using namespace std;
long long isqrt(long long x){
    long long l = 0, r = 1e9, res = 0;
    while(l <= r){
        int mid = (l+r)/2;
        if(mid <= x /mid){
            res = mid;
            l = mid + 1;
        }else r = mid - 1;
    }
    return res;
}
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("file.INP", "r", stdin);
    freopen("file.OUT", "w", stdout);

    long long a,b; cin >> a >> b; 
    long long l = isqrt(a);
    if(l*l < a) l++;
    long long r = isqrt(b);
    if(l > r) cout << 0;
    else cout << r - l + 1;
    return 0;
}