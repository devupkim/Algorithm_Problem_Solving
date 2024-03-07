#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m = 1000;
    vector<bool> is_prime(m + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= m; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= m; j += i) {
                is_prime[j] = false;
            }
        }
    }

    int N;
    cin >> N;
    int cnt = 0;
    while (N--) {
        int num;
        cin >> num;
        if (is_prime[num]) cnt++;
    }
    cout << cnt;
    return 0;
}
