#include <bits/stdc++.h>
using namespace std;
int uoc(int n){
    int res = 0;
    int limit = sqrt(n);
    for(int i = 1; i <= limit; i++){
        if(n%i == 0){
            res++; 
            if(i != n / i){
                res++;
            }
        }
    }
    return res;
}
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int a,b; cin >> a >> b;
        cout << uoc(a*b) << endl;

    }
    return 0;
}