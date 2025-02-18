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

    if (a > b) swap(a, b);
    if (b - a < 2) {
        cout << "0";
        cout << "";
    } else {
        int i = b - a;
        cout << i - 1 << "\n";
        while (--i) {
            cout << b - i << " ";
        }
    }
}