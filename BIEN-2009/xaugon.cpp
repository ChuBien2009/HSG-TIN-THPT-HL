#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; 
    vector<string> a;
    for(int j = 0; j < n; j++){
        string r;
        cin >> r;
        a.push_back(r);
    }
    for(int w = 0; w < n; w++){
        string s = a[w];
       

        stack<string> st;

        for (int i = 0; i < (int)s.size(); i++) {
            // Nếu là chữ cái
            if (isalpha(s[i])) {
                st.push(string(1, s[i])); 
            }
            // Nếu là '('
            else if (s[i] == '(') {
                st.push("(");
            }
            // Nếu là ')'
            else if (s[i] == ')') {
                string tmp = "";
                while (!st.empty() && st.top() != "(") {
                    tmp = st.top() + tmp;
                    st.pop();
                }
                st.pop(); // bỏ '('
                st.push(tmp);
            }
            // Nếu là số
            else if (isdigit(s[i])) {
                int k = 0;
                while (i < (int)s.size() && isdigit(s[i])) {
                    k = k * 10 + (s[i] - '0');
                    i++;
                }
                i--; // lùi lại 1 bước

                string top = st.top();
                st.pop();

                string repeated = "";
                for (int j = 0; j < k; j++) {
                    repeated += top;
                }
                st.push(repeated);
            }
        }

        // Ghép kết quả
        string result = "";
        while (!st.empty()) {
            result = st.top() + result;
            st.pop();
            //afgAGGGGDDDDDD

        }

        cout << result << endl;
    }
    return 0;
}
