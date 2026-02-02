#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<string> ans;
    string temp;
    stringstream ss (s);
    while(ss >> temp){
        long long i = stoi(temp);
        string a = "";
        while(i > 0){
            if(i%2 == 0){
                a = "0" + a;
            }else{
                a = "1" + a;
            }
            i /= 2;
        }
        ans.push_back(a);
    }
    cout << ans.size() << endl;
    for(string x : ans){
        cout << x << " ";
    }
    return 0;
}