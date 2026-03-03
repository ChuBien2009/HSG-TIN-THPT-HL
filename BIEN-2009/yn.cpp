#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;

    vector<vector<long long>> a(m, vector<long long>(n));
    vector<long long> rowMax(m, LLONG_MIN), rowMin(m, LLONG_MAX);
    vector<long long> colMax(n, LLONG_MIN), colMin(n, LLONG_MAX);

    // Nhập và tính min/max
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];

            rowMax[i] = max(rowMax[i], a[i][j]);
            rowMin[i] = min(rowMin[i], a[i][j]);
            colMax[j] = max(colMax[j], a[i][j]);
            colMin[j] = min(colMin[j], a[i][j]);
        }
    }

    int count = 0;

    // Kiểm tra phần tử yên ngựa
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if((a[i][j] == rowMax[i] && a[i][j] == colMin[j]) ||
               (a[i][j] == rowMin[i] && a[i][j] == colMax[j])){
                count++;
            }
        }
    }

    cout << count;
}