#include <bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c,d; cin >> a >> b >> c >> d;
    if(a > 10 || b > 10 || c > 10 || d > 10 || a < 0 || b < 0 || c < 0 || d < 0){
        cout << "NHAP LAI";
    }
    float kq = a + b + (c*2) + (d*3);
    kq /= 7;
    if(kq >= 8){
        cout << "TOT";
    }else if(kq < 8 && kq >= 6.5){
        cout << "KHA";
    }else if(kq < 6.5 && kq >= 5){
        cout << "DAT";
    }else if(kq < 5){
        cout << "CHUA DAT";
    }
    
    return 0;
}