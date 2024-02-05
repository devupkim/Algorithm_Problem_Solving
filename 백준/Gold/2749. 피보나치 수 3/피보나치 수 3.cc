#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

const int mod = 1'000'000;
const int p = mod / 10 * 15;
int fibo[p] = {0, 1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    for (int i = 2; i < p; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        fibo[i] %= mod;
    }
    cout << fibo[n % p] << endl;
    return 0;
}

int mod_pow(ll a, ll b, ll c) {
    ll ret = 1;
    while (b) {
        if (b & 1) ret = ret * a % c;
        a = a * a % c;
        b >>= 1;
    }
    return ret;
}
