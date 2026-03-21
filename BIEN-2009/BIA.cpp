#include <bits/stdc++.h>
using namespace std;
bool dx(long long n){
    int a = n, res = 0;
    while(a > 0){
        res = res * 10 + (a%10);
        a/=10;
    }
    if(res == n) return true;
    else return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("file.INP", "r", stdin);
    freopen("file.OUT", "w", stdout);
    string s; cin >> s;
    int res = 0, ans = -1;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            res = res * 10 + (s[i] - '0');
        }else{
            if(dx(res)){
                ans = max(ans,res);
            }
            res = 0;
        }
    }
    if(dx(res)){
        ans = max(ans,res);
    }
    if(ans > 0){
        cout << ans;
    }else{
        cout << "-1";
    }
    return 0;
}