#include <bits/stdc++.h>
using namespace std;
bool isBeautiful(long long n) {
    if (n <= 1) return false; // thường không xét 0,1 là số đẹp

    long long limit = sqrt(n);
    for (long long k = 2; k <= limit; k++) {
        long long sq = k * k;
        if (n % sq == 0) {
            return false; // có ước là số chính phương > 1
        }
    }
    return true; // không có ước nào là số chính phương
}
int main(){
    //cau 1
    // int n; cin >> n;
    // vector<int> a(n);
    // int minvalue = INT_MAX;
    // for(int i = 0; i < n; i++){
    //     cin >> a[i];
    //     minvalue = min(minvalue,a[i]);
    // }
    // for(int i = minvalue; i >= 1; i--){
    //     bool kq = true;
    //     for(int j = 0; j < n; j++){
    //         if(a[j] % i != 0){
    //             kq = false;
    //         }
    //     }
    //     if(kq){
    //         cout << i << endl;
    //         break;
    //     }
    // }


    // cau 2
    // string s; getline(cin,s);
    // stringstream ss (s);
    // string temp;
    // unordered_map<string, int> mp;
    // vector<string> ans;
    // while(ss >> temp){
    //     string a = temp;
    //     for(int i = 0; i < a.size(); i++){
    //         a[i] = toupper(a[i]);
    //     }
    //     if(mp.count(a) == false){
    //         ans.push_back(temp);
    //         mp[a] = 1;
    //     }
    // }
    // for(auto x : ans){
    //     cout << x << " ";
    // }
    // cau 3
    // int n; cin >> n;
    // int ans = 0;
    // int limit = sqrt(n);
    // for(int i = 1; i <= limit; i++){
    //     if(n%i == 0){
    //         if(isBeautiful(i)){
    //             ans = max(ans,i);
    //         }
    //         if(isBeautiful(n/i)){
    //             ans = max(ans , n/i);
    //         }
    //     }
    // }
    // cout << ans;

    //cau4
    int n;
    cin >> n;

    long long C[21][21] = {0};

    
    for (int i = 0; i < n; i++) {
        C[i][0] = C[i][i] = 1;
        for (int j = 1; j < i; j++) {
            C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }

   
    
    for (int i = 0; i < n; i++) {
        
        for (int s = 0; s < n - i - 1; s++) {
            cout << " ";
        }
        
        for (int j = 0; j <= i; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}