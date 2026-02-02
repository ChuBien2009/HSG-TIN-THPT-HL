#include <bits/stdc++.h>
using namespace std;
vector<bool> snt(1000001, true);
void nt(){
    snt[0] = snt[1] = false;
    for(int i = 2; i * i <= 1000000; i++){
        if(snt[i]){
            for(int j = i*i; j <= 1000000; j+=i){
                snt[j] = false;
            }
        }
    }
    return;
}
int main(){
    int n; cin >> n;
    vector<int> a(n);
    nt();
    int max1 = 0, max2 = 0, sl = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(snt[a[i]]){
            if(a[i] > max1){
                max2 = max1;
                max1 = a[i];
                sl++;
            }
        }
    }
    if(sl < 2){
        cout << "-1";
        return 0;
    }
    cout << max1 + max2;

    return 0;
}