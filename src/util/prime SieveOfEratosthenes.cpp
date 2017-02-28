#include <iostream>
#include <bits/stdc++.h>


using namespace std;

void SieveOfEratosthenes(unsigned long long n) {
    bool *prime = new bool[n + 1]{};

    for (unsigned long long p = 2; p * p <= n; p++) {
        if (!prime[p]) {
            for (auto i = p * 2; i <= n; i += p)
                prime[i] = true;
        }
    }

    unsigned long long count = 0;
    for (int p = 2; p <= n; p++) {
        if (!prime[p]) {
            count++;
            //cout<<i<<"\n";
        }
    }
    delete[] prime;

    cout << count;

}


int main() {
    const unsigned long long n = 10000000000;
    SieveOfEratosthenes(n);
    return 0;

}