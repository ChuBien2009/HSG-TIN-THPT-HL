#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n+1,0);
    int f = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] == 50){
            f++;
        }else{
            f += 2;
        }
    }
    if(f % 2 == 0){
        cout << "YES";
    }else{
        cout << "N0";
    }
    return 0;
}