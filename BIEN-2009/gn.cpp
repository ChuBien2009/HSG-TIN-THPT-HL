#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;   // hoặc getline(cin, s);

    string result = "";
    int i = 0;

    while (i < s.size()) {
        int k = s[i] - '0'; // lấy số
        i++;

        string temp = "";
        // lấy chuỗi chữ cái phía sau
        while (i < s.size() && !isdigit(s[i])) {
            temp += s[i];
            i++;
        }

        // lặp k lần
        for (int j = 0; j < k; j++) {
            result += temp;
        }
    }

    cout << result;
}