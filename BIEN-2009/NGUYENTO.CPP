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

int main() {
    sieve();

    string line;
    getline(cin, line);

    stringstream ss(line);
    int x;
    long long sum = 0;

    while (ss >> x) {
        if (isPrime(x)) {
            cout << x << " ";
            sum += x;
        }
    }

    cout << "\n" << sum;
    return 0;
}
