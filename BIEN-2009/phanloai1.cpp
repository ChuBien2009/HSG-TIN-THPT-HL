#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> chan, le;
    int sumc = 0, suml = 0;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        if(x%2 == 0){
            sumc += x;
            chan.push_back(x);
        }else{
            suml += x;
            le.push_back(x);
        }
    }
    for(auto s:chan){
        cout << s << " ";
    }
    cout << endl;
    for(auto s:le){
        cout << s << " ";
    }
    cout << endl;
    cout << sumc << endl;
    cout << suml;
    return 0;
}