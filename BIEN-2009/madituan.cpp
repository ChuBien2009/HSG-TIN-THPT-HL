#include <bits/stdc++.h>
using namespace std;
#define TASK ""
int n, m;
int a[8][8];
int dy[] = {1,-1,-2,2-2,2,-1,1};
int dx[] = {2,2,1,1,-1,-1,-2,-2};
void bt(int cnt,int y, int x){
    if(cnt == n*m){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        exit (0) ;
    }

    for(int i = 0; i < 8; i++){
        int nx = x + dx[i], ny = y + dy[i];
        if(nx > 0 && nx <= n && ny > 0 && ny <= m && a[nx][ny] == 0){
            a[nx][ny] = cnt + 1;
            bt(cnt + 1, nx, ny);
            a[nx][ny] = 0;
        }
    }
}
int main(){
     if (fopen(TASK".inp","r")) {
        freopen(TASK".inp","r",stdin);
        freopen(TASK".out","w",stdout);
    }
    cin >> n >> m;
    memset(a,0,sizeof(a));
    a[1][1] = 1;
    bt(1,1,1);
    return 0;
}
