#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin,s);
    int cnt = 0;
    for(auto x : s){
        if(isdigit(x)){
            cnt += x - '0';
        }
    }
    cout << cnt << endl;
    bool kt = true;
    for(int i = s.size() - 1; i >= 0; i--){
        if(isalpha(s[i])){
            cout << s[i];
            kt = false;
        }
    }
    if(kt){
        cout << "-1";
    }
    return 0;
}