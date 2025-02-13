#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int a[7];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum = 0, min = 100;

    for (auto i: a) {
        cin >> i;
        if (i % 2 == 1) {
            sum += i;
            if (i < min) min = i;
        }
    }
    if (sum == 0) {
        cout << -1;
    } else {
        cout << sum << "\n";
        cout << min;
    }

}