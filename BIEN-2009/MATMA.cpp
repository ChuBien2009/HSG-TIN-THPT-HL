#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("file.INP", "r", stdin);
    freopen("file.OUT", "w", stdout);
    
    string s; getline(cin,s);
    stringstream ss (s);
    string temp;
    int sum = 0;
    vector<string> ans;
    while(ss >> temp){
        string a = "";
        for(int i = 0; i < temp.size(); i++){
            if(isdigit(temp[i])) sum += temp[i] - '0';
            if(isalpha(temp[i])) a = temp[i] + a;
        }
        ans.push_back(a);
    }
    cout << sum << " ";
    for(auto x:ans){
        cout << x << " ";
    }
    return 0;
}