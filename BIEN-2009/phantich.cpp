#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("pt.inp","r",stdin);
    freopen("pt.out","w",stdout);

    int chan = 0, le = 0, minx = 0, maxx = 0;
    int x;
    while(cin >> x){
        if(x % 2 == 0){
            chan++;
        }else{
            le++;
        }
        maxx = max(maxx,x);
        minx = min(minx,x);
    }
    cout << le << " " << chan << endl;
    cout << maxx << " " << le;
    return 0;
}