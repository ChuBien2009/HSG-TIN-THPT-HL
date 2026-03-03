#include <bits/stdc++.h>
using namespace std; 
int tonguoc(int n){
    int res = 2, limit = sqrt(n);
    for(int i = 2; i <= limit; i++){
        if(n%i == 0){
            res++;
            if(i != n/i){
                res++;
            }
        }
    }
    return res;
}
bool is_prime(int n){
    int limit = sqrt(n);
    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    for(int i = 5; i <= limit; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    //nto
    // int t; cin >> t;
    // for(int i = 1; i <= t; i++){
    //     int x; cin >> x;
    //     int limit = x/2;
    //     cout << tonguoc(x) << " ";
    //     vector<int> a;
    //     for(int i = 2; i <= x; i++){
    //         if(x% i == 0){
    //             while (x % i == 0){
    //             a.push_back(i);
    //             x /= i;
    //         }
    //         }
    //     }
    //     for(int i = 0; i < a.size(); i++){
    //         if(i < a.size() - 1){
    //             cout << a[i] << "*";
    //         }else{
    //             cout << a[i] << endl;
    //         }
    //     }
    // }


    // //solonnhat
    // int t; cin >> t;
    // for(int i = 1; i <= t; i++){
    //     string s; cin >> s;
    //     long long res = 0;
    //     long long ans = 0;
    //     unordered_map<char,int> mp;
    //     for(int j = 0; j < s.size(); j++){
    //         if(mp.count(s[j]) || s[j] == s[j-1]){
    //             ans = max(res,ans);
    //             res = s[j] - '0';
    //             mp.clear();
    //         }else{
    //             res = res * 10 + s[j] - '0';
    //             mp[s[j]] = 1;
    //         }
    //     }
    //     ans = max(res,ans);
    //     cout << ans << endl;
    // }


    // matran
    int m,n; cin >> m >> n;
    vector<vector<int>> a(m, vector<int> (n));
    int maxv = 0,max1 = 0, max2 = 0, nto = INT_MAX, max3 = 0, max4 = 0;
    for(int i = 0; i < m; i ++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            maxv = max(a[i][j], maxv);
            if(a[i][j] > max3){
                max4 = max3;
                max3 = a[i][j];
            }
            if(is_prime(a[i][j])){
                nto = min(nto,a[i][j]);
            }
        }
        if(maxv > max1){
            max2 = max1;
            max1 = maxv;
        }
    }
    cout << max2 << " " << max1 << endl;
    cout << max4 << endl;
    cout << nto;
    return 0;
}