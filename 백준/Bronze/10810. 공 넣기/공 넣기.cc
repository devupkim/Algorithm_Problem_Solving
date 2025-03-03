#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int a[101] = {0,};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    while (m--) {
        int i, j, k;
        cin >> i >> j >> k;
        for (; i <= j; i++) {
            a[i] = k;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
}