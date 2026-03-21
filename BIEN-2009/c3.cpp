#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("file.INP", "r", stdin);
    // freopen("file.OUT", "w", stdout);
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0, sum = 0;
    if(n % 2 == 0){
        int x = 0, y = 0;
        while(x < n && y < n){
            if(a[x][y] % 2 == 0){
                sum += a[x][y];
            }else cnt++;
            x++; y++;
        }
        x = 0, y = n-1;
        while(x < n && y >= 0){
            if(a[x][y] % 2 == 0){
                sum += a[x][y];
            }
            x++; y--;
        }
        cout << cnt << endl;
        cout << sum;
    }else{
        int x = 0, y = 0;
        while(x < n && y < n){
            if(a[x][y] % 2 == 0){
                sum += a[x][y];
            }else cnt++;
            x++; y++;
        }
        x = 0, y = n-1;
        while(x < n && y >= 0){
            if(a[x][y] % 2 == 0){
                sum += a[x][y];
            }
            x++; y--;
        }
        x = n/2 ;
        y = x;
        if(a[x][y] % 2 == 0){
            sum -= a[x][y];
        }
        cout << cnt << endl;
        cout << sum;
    }
    return 0;
}