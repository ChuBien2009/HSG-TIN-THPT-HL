#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int temp = n, res = n;
    for(int i = 2; i <= temp; i++){
        if(temp % i == 0){
            while(temp % i == 0){
                temp /= i;
                res -= res/i;
            }
        }
    }
    if(temp > 1){
        res -= res/temp;
    }
    cout << res ;
    return 0;
}