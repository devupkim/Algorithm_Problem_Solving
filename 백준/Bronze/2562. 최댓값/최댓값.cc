#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;
    int max = 0;

    for (int i = 1; i <= 9; i++) {
        int k;
        cin >> k;
        if (k > max) {
            max = k;
            n = i;
        }
    }

    cout << max << "\n" << n;
}