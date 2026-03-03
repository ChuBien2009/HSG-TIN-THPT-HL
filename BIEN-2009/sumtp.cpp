#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    int sum = 0;
    while(n>0){
        int i = n%10;
        sum += i*i;
        n /= 10;
    }
    cout << sum;
    return 0;
}