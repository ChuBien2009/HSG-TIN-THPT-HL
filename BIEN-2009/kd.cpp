#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> pre(n,0);
    for(int i = 1; i < n; i++){
        cin >> pre[i];
    }
    int cur_sum = pre[0];
    int max_sum = pre[0];
    for(int i = 0; i < n; i++){
        cur_sum = max(pre[i], cur_sum + pre[i]);
        max_sum = max(max_sum, cur_sum);
    }
    cout << max_sum;
    return 0;
}