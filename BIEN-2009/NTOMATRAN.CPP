#include <bits/stdc++.h>
using namespace std;
const int MAXP = 31623;
vector<bool> isprime(MAXP + 1, true);
vector<int> primes;

void sieve() {
    isprime[0] = isprime[1] = false;
    for (int i = 2; i <= MAXP; i++) {
        if (isprime[i]) {
            primes.push_back(i);
            if (1LL * i * i <= MAXP)
                for (int j = i * i; j <= MAXP; j += i)
                    isprime[j] = false;
        }
    }
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int p : primes) {
        if (1LL * p * p > n) break;
        if (n % p == 0) return false;
    }
    return true;
}

int main(){
    sieve();
    int m,n; cin >> m >> n;
    vector<vector<int>> a(m,vector<int> (n));
    vector<int> ans;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(isPrime(a[i][j])) ans.push_back(a[i][j]);
        }
    }
    cout << ans.size() << endl;
    for(auto x : ans){
        cout << x << " ";
    }
    return 0;
}