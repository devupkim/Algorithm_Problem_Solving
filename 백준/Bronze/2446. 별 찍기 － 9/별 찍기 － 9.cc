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

    for (int i = n; i >= 1; i--) {
        for (int k = 1; k <= n - i; k++) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
        cout << endl;
    }
    for (int i = 2; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
        cout << endl;
    }

}