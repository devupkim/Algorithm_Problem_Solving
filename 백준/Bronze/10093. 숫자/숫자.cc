#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b;
    cin >> a >> b;

    if (a == b) {
        cout << 0;
        cout << "";
    } else if (a > b) {
        cout << a - b - 1;
        cout << "\n";
        for (int i = b + 1; i < a; i++) {
            cout << i << " ";
        }
    } else {
        cout << b - a - 1;
        cout << "\n";
        for (int i = a + 1; i < b; i++) {
            cout << i << " ";
        }
    }
}