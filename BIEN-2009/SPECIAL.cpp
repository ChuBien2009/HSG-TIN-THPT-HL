#include <bits/stdc++.h>
using namespace std;
int uoc(int n){
    int res = 0;
    int limit = sqrt(n);
    for(int i = 1; i <= limit; i++){
        if(n%i == 0){
            res += i;
            if(i != n/i){
                res += n/i;
            }
        }
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("file.INP", "r", stdin);
    freopen("file.OUT", "w", stdout);

    int a,b; cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(uoc(i) > 2*i) cnt++;
    }
    cout << cnt;
    return 0;
}