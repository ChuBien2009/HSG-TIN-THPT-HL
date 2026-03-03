#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    vector<long long> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    vector<int> P(n);
    for (int i = 0; i < n; i++) cin >> P[i];

    vector<long long> result(n);
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;

        // Tìm chu trình hoán vị
        vector<int> cycle;
        int cur = i;
        while (!visited[cur]) {
            visited[cur] = true;
            cycle.push_back(cur);
            cur = P[cur];
        }

        int L = cycle.size();
        int shift = k % L;

        // Áp dụng P^k đúng chiều: A_new[P[i]] = A[i]
        for (int j = 0; j < L; j++) {
            result[cycle[(j + shift) % L]] = A[cycle[j]];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
