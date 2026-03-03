#include <bits/stdc++.h>
using namespace std;
int tongChuSo(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Hàm kiểm tra số đặc biệt
bool laSoDacBiet(int n) {
    int tong1 = tongChuSo(n);
    int tong2 = 0;
    int temp = n;

    // Phân tích thừa số nguyên tố
    for (int i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            tong2 += tongChuSo(i);
            temp /= i;
        }
    }

    // Nếu còn lại là số nguyên tố > 1
    if (temp > 1) {
        tong2 += tongChuSo(temp);
    }

    return tong1 == tong2;
}

int main(){
    int n; cin >> n;
    int i = n+1;
    while(laSoDacBiet(i) == false){
        i++;
    }
    cout << i;
    return 0;
}