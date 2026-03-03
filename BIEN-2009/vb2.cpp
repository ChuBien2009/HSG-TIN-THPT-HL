#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int digit = 0;
    int lenth = 0, len = 1;
    bool so = false;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            digit++;
            so = true;
            if(isdigit(s[i-1])){
                len++;
            }
        }else{
            lenth = max(lenth, len);
            len = 1;
        }
    }
    lenth = max(lenth, len);
    if(so == false){
        lenth = 0;
    }
    int chu = s.size() - digit;
    cout << chu << " " << digit << endl;
    cout << lenth;
    return 0;
}