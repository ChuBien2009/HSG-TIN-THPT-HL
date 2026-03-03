#include <bits/stdc++.h>
using namespace std;
int main(){
    // freopen("pt.inp","r",stdin);
    // freopen("pt.out","w",stdout);
    int k; string s;
    getline(cin,s);
    cin >> k;
    int kq = 0;
    stringstream ss(s);
    string temp;
    while(ss >> temp){
        if(temp.size() == k) kq++;
    }
    cout << kq;
    return 0;
}