#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int sum = 0, ans = 0, limit = sqrt(n);
    for(int i = 1; i <= limit; i++){
        if(n%i == 0){
            ans++;
            sum += i;
            if(i != n/i){
                ans++;
                sum += n/i;
            }
        }
    }
    cout << ans << endl;
    cout << sum;
    return 0;
}