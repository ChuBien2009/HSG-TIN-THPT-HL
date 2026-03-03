#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    if(n == 1){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'H'){
                for(int j = i+1; j < s.size(); j++){
                    if(s[j] == 'S'){
                        for(int k = j+1; k <= s.size();k++){
                            if(s[k] == 'G'){
                                ans++;
                            }
                        }
                    }
                }
            }
        }
    }
    cout  << ans;
    return 0;
}