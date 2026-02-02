#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("a", "w", stdout);
    auto a = 1;
    auto b = "123";

    
    int n; cin >> n;
    int best = 0;
    for(int i = 1; i <= n; i++){
        int sum = 0;
        for(int j = 1; j <= n; j++){
            int x; cin >> x; sum += x;
        }
        if(sum > best){
            best = sum;
        }
    }
    cout << best ;
    return 0;
}