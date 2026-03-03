#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    int chan = 0, le = 0;
    while(n > 0){
        int i = n%10;
        if(i%2 == 0){
            chan += i;
        }else{
            le += i;
        }
        n /= 10;
    }
    if(chan > le){
        cout << "Yes" << endl;
    }else{
        cout << "No";
    }
    return 0;
}