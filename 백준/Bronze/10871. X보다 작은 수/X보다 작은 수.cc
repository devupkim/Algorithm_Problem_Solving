#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, i;
    cin >> n >> x;
    while (n--) {
        cin >> i;
        if (i < x) cout << i << " ";
    }
}