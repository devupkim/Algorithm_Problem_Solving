#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (k < x) {
            cout << k << " ";
        }
    }

    return 0;
}