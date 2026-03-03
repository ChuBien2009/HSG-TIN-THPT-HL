#include <bits/stdc++.h>
using namespace std;
int ss(int n){
    int b = n,a = 0;
    while(b > 0){
        a = a*10 + b%10;
        b /= 10;
    }
    return a;
}
int ucln(int a, int b){
    while(b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
 int n; cin >> n;
 int ans = 1;
    for(int i = 2; i <= n; i++){
        if(ucln(i, ss(i)) == 1){
            ans++;
        }
    }
    cout << ans;
    return 0;
}