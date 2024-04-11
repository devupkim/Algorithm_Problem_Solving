#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int j = n - i;
        int k = i;
        for (; j > 0; j--) {
            cout << " ";
        }
        for (; k > 0; k--) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}