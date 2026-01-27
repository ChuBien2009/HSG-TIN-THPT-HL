#include <bits/stdc++.h>
#define ll long long
using namespace std;
using str=string;
str decom(const str& s) {
    stack<str> st;str res = "";
    ll i=0,n=s.length();
    while (i<n) {
        if (isalpha(s[i])) {
            str temp = "";temp += s[i];
            if (i + 1 < n && isdigit(s[i + 1])) {
                ll num = 0;i++;
                while (i < n && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                i--; 
                for (int j = 0; j < num; j++) res += temp;
            } else res += temp;
        }
        else if (isdigit(s[i])) return "0";
        else if (s[i] == '(') {
            st.push(res);
            res = "";
        }
        else if (s[i] == ')') { if (st.empty()) return "0";
            str temp = res;res = st.top();st.pop();
            if (i + 1 < n && isdigit(s[i + 1])) {
                ll num = 0;i++;
                while (i < n && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                i--;
                for (int j = 0; j < num; j++) res += temp;
            } else res += temp;
            
        }
        else return "0"; 
        i++;
    }
    if (!st.empty()) return "0";
    return res;
}
int main() {
    ll n;cin >> n; 
    for (ll i = 0; i < n; i++) {
        str s;cin>>s;
        cout <<decom(s)<<"\n";
    }
    return 0;
}