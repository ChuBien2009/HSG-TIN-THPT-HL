#include <bits/stdc++.h>
using namespace std;
long long x( int n){
    long long sum = 0;
    while(n > 0){
        sum += n% 10;
        n /= 10;
    }
    return sum;
}
int main(){
    long long a,b ,s; cin >> a >> b >> s;
    int ans = 0;
    for(int i = a; i <= b; i++){
        if(x(i) == s){
            ans ++;
        }
    }
    cout << ans;
    return 0;
}