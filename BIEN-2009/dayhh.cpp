#include <bits/stdc++.h>
using namespace std;

const double EPS = 1e-6;
int n;
long long k;
vector<long long> a;

// kiểm tra có tồn tại dãy con thỏa avg >= mid không
bool check(double mid) {
    vector<double> B(n + 1, 0.0);      // prefix của b[i]
    vector<long long> S(n + 1, 0);     // prefix của a[i]

    for (int i = 1; i <= n; i++) {
        S[i] = S[i - 1] + a[i];
        B[i] = B[i - 1] + (a[i] - mid);
    }

    double minB = 0.0;
    int l = 0;

    for (int r = 1; r <= n; r++) {
        // mở rộng l sao cho S[l] <= S[r] - k
        while (l < r && S[l] <= S[r] - k) {
            minB = min(minB, B[l]);
            l++;
        }

        if (B[r] - minB >= 0) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    a.resize(n + 1);

    long long mn = LLONG_MAX, mx = LLONG_MIN;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    double left = mn, right = mx, ans = mn;

    // nhị phân trên đáp án
    for (int it = 0; it < 50; it++) {
        double mid = (left + right) / 2;
        if (check(mid)) {
            ans = mid;
            left = mid;
        } else {
            right = mid;
        }
    }
    int a = 1;
    while(a < ans){
        a++;
    }
    cout << a-1;
    return 0;
}
