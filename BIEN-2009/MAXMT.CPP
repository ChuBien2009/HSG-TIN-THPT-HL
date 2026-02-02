#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);

    int m = 0,n = 0;
    for(int i = 0; i <= a.size(); i++){
        if(isdigit(a[i])){
            m = m*10 + (a[i] - '0');
        }
    }
    for(int i = 0; i <= b.size(); i++){
        if(isdigit(b[i])){
            n = n*10 + (b[i] - '0');
        }
    }
    vector<vector<int>> mt(m, vector<int> (n));
    int ptmax = -1;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> mt[i][j];
            ptmax = max(ptmax,mt[i][j]);
        }
    }
    cout << m << " " << n << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << mt[i][j] << " ";
        }
        cout << endl;
    }
    cout << ptmax;
    return 0;
}