#include <bits/stdc++.h>
using namespace std;
vector<bool> snt(1000001,true);
void sang(){
    snt[0] = snt[1] = false;
    int limit = sqrt(1000000);
    for(int i = 2; i <= limit; i++){
        if(snt[i]){
            for(int j = i*i; j <= 1000000; j+=i){
                snt[j] = false;
            }
        }
    }
    return;
}
bool cp(int n){
    int a = sqrt(n);
    if(a*a == n) return true;
    return false;
}
int main(){
    // c1
    // sang();
    // int n; cin >> n;
    // int nt = 0, tcp = 0; 
    // vector<int> a(n);
    // for(int i = 0; i < n; i++){
    //     cin >> a[i];
    //     if(snt[a[i]]){
    //         nt++;
    //     }
    //     if(cp(a[i])){
    //         tcp += a[i];
    //     }
    // }
    // cout << nt << endl;
    // cout << tcp << endl;



    //c2
    // string s; getline(cin,s);
    // stringstream ss (s);
    // string temp;
    // vector<string> ans;
    // int xau = 0;
    // while(ss >> temp){
    //     temp[0] = toupper(temp[0]);
    //     for(auto a:temp){
    //         if(isdigit(a)){
    //             xau++;
    //         }
    //     }
    //     ans.push_back(temp);
    // }
    // cout << xau << endl;
    // for(auto a:ans){
    //     cout << a << " ";
    // }


    // c3
    // int n; cin >> n;
    // vector<vector<int>> a(n, vector<int> (n));
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // int sum1 = 0, sum2 = 0;
    // for(int i = 0; i < n; i++){
    //     sum1 += a[i][0];
    // }
    // for(int i = 0; i < n; i++){
    //     sum1 += a[i][n-1];
    // }
    // for(int i = 1; i < n-1; i++){
    //     sum1 += a[0][i];
    // }
    // for(int i = 1; i < n-1; i++){
    //     sum1 += a[n-1][i];
    // }
    // for(int i = 0; i < n; i++){
    //     sum2 += a[i][i];
    // }
    // cout << sum2 << endl;
    // cout << sum1;


    //c4
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = INT_MAX;
    for(int i = 0; i < n-1; i++){
        int x = abs(a[i] - a[i+1]);
        ans = min(ans,x);
    }
    cout << ans;
    return 0;
}