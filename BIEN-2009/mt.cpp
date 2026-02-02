#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n; cin >> n >> m;
    int max1 = 0, max2 = 0, maxl = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int x; cin >> x;
            maxl = max(maxl,x);
        }
        if(maxl > max1){
            max2 = max1;
            max1 = maxl;
        }
        maxl = 0;
    }
    cout << max2 << " " << max1;
    return 0;
}