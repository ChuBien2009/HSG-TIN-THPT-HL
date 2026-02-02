#include <bits/stdc++.h>
using namespace std;

bool check(const string &s) {
    bool hasLower = false, hasUpper = false, hasDigit = false;

    for (char c : s) {
        if (islower(c)) hasLower = true;
        else if (isupper(c)) hasUpper = true;
        else if (isdigit(c)) hasDigit = true;
    }

    return hasLower && hasUpper && hasDigit;
}

int main() {
    string s;
    cin >> s;
    int n = s.length();
    vector<string> xc;
    for (int i = 0; i < n; i++) {
        for (int j = i + 5; j < n; j++) { // j - i + 1 >= 6
            string sub = s.substr(i, j - i + 1);
            if (check(sub)) {
                xc.push_back(sub);
            }
        }
    }
    cout << xc.size() << endl;
    for(auto a:xc){
        cout << a << " ";
    }
    return 0;
}
