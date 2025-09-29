#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i <= n - 1; i++) {
        for (int k = 1; k <= i; k++) cout << " ";
        for (int k = 2 * (n - i) - 1; k > 0; k--) cout << "*";
        cout << endl;
    }
}