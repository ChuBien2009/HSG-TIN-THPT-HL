#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,k; cin >> m >> n >> k;
    vector<int> a(n*m);
    for(int i = 0; i < n*m; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    int l = 0, r = n*m - 1;
    while(l < r){
        if(a[l] + a[r] <= k){
            ans = max(ans,a[l]+ a[r]);
            l++;
        }else{
            r--;
        }
    }
    if(ans == 0){
        cout << "-1";
    }else{
        cout << ans;
    }
    return 0;
}