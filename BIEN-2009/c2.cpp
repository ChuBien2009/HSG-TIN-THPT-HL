#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("file.INP", "r", stdin);
    // freopen("file.OUT", "w", stdout);
    string s; cin.ignore(); cin >> s;
    stringstream ss (s);
    string temp;
    int cnt = 0;
    while(ss >> temp){
        bool dk1 = true, dk2 = true, dk3 = true,dk4 = true;
        bool ktH = false, kth = false, kt = false;
        for(int i= 0; i < temp.size(); i++){
            if((temp[i] > 'z' && temp[i] < 'a') || (temp[i] > 'Z' && temp[i] < 'A') || (temp[i] < '0' && temp[i] > '9') ) dk1 = false;
            if(i > 0){
                if(temp[i] == temp[i-1]) dk3 = false;
            }
            if(temp.size() < 6 || temp.size() > 20) dk4 = false;
            if(islower(temp[i])) kth = true;
            if(isupper(temp[i])) ktH = true;
            if(isdigit(temp[i])) kt = true;
        }
        if(kt && kth && ktH){
            dk2 = true;
        }else dk2 = false;
        if(dk1 && dk2 && dk3 && dk4) cnt ++;
    }
    cout << cnt;
    return 0;
}