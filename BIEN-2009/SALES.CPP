#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    vector<string> a;
    while(true){
        getline(cin,s);
        if(s.empty()) break;
        a.push_back(s);
    }
    
    for(int i = 0; i < a.size(); i++){
        stringstream ss (a[i]);
        string temp;
        int sum = 0;
        while(ss >> temp){
            sum += stoi(temp);
        }
        cout << sum << endl;
    }
    return 0;
}