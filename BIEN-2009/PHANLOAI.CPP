#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin,s);
    string a;
    stringstream ss (s);
    vector<long long> am, duong;
    while(ss >> a){
        long long x = stoi(a);
        if(x > 0) duong.push_back(x);
        if(x < 0) am.push_back(x);
    }
    for(auto z:duong){
        cout << z << " ";
    }
    cout << endl;
    for(auto z:am){
        cout << z << " ";
    }
    return 0;
}