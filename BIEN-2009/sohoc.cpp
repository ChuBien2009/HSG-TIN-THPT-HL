#include <bits/stdc++.h>
using namespace std;
vector<bool> snt(1000001,true);
void sangnt(){
    snt[0] = snt[1] = false;
    for(int i = 2; i*i <= 1000001; i++){
        if(snt[i]){
            for(int j = i*i; j <= 1000001; j+=i){
                snt[j] = false;
            }
        }
    }
    return ;
}
int sum(string s){
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }
    return sum;
}
bool isprime( long long n){
    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}
int tongbp(long long n){
    int sum = 0;
    while ( n > 0){
        int i = n%10;
        sum += i*i;
        n /= 10;
    }
    return sum;
}
int main(){
    //BAI 3
    // string s; cin >> s;
    // if(s.size() == 1 && stoi(s) == 9){
    //     cout << "1";
    //     return 0;
    // }
    // if(sum(s) == 9){
    //     cout << "1";
    // }else{
    //     cout << "0";
    // }


    // BAI 4
    // long long a; cin >> a;
    // for(int i = 2; i <= a; i++){
    //     if((int)pow(i,i) % a == 0){
    //         cout << i;
    //         return 0;
    //     }
    // }


    //BAI 5
    // long long n; cin >> n;
    // string ans;
    // while(n > 0){
    //     if(n%2 == 0){
    //         ans = "0" + ans;
    //     }else{
    //         ans = "1" + ans;
    //     }
    //     n /= 2;
    // }
    // cout << ans;


    //BAI 6
    // string s; cin >> s;
    // long long sum = 0;
    // for(char x : s){
    //     sum = sum * 2 + (x - '0');
    // }
    // cout << sum;


    //BAI 7
    // long long n,b; cin >> n >> b;
    // int sum = 0;
    // while(n>0){
    //     sum += n%b;
    //     n = n/b;
    // }
    // cout << sum;

    //BAI 8
    // string s; cin >> s;
    // string ans = "";
    // while(s.size() % 4 != 0){
    //     s = '0' + s;
    // }
    // for(int i = 0; i < s.size(); i += 4){
    //     int val = 0;
    //     for(int j = 0; j < 4; j++){
    //         val = val * 2 + (s[i+j] - '0');
    //     }
    //     if(val < 10){
    //         ans += char('0' + val);
    //     }else{
    //         ans += char('A' + val - 10);
    //     }
    // }
    //cout << ans;


    //bai 9
    // string s; cin >> s;
    // int sum = 0;
    // for(int i = 0; i < s.size(); i++){
    //     if(i % 2 == 0){
    //         sum += s[i] - '0';
    //     }else{
    //         sum -= s[i] - '0';
    //     }
    // }
    // cout << sum;

    // bai 10
    // int n; cin >> n;
    // int x = 0;
    // for(int i = 11; i <= 100000000; i++){
    //     if(isprime(tongbp(i))){
    //         x++;
    //         if(x == n){
    //             cout << i;
    //             break;
    //         }
    //     }
    // }


    //bai11
    // int n; cin >> n;
    // vector<int> a(n), ans;;
    // sangnt();
    // for(int i = 0; i < n; i++){
    //     cin >> a[i];
    //     if(snt[a[i]]){
    //         ans.push_back(a[i]);
    //     }
    // }
    // cout << ans.size() << endl;
    // for(auto s:ans){
    //     cout << s << " ";
    // }


    //bai12;
    // int n; cin >> n;
    // int a = n;
    // int rev = 0;
    // while(a > 0){
    //     rev = rev * 10 + (a%10);
    //     a /= 10;
    // }
    // cout << rev;


    return 0;
}