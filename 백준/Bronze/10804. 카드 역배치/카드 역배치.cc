#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(20);
    iota(v.begin(), v.end(), 1);

    int n = 10;
    while (n--) {
        int a, b;
        cin >> a >> b;
        reverse(v.begin() + a - 1, v.begin() + b);
    }

    for (auto &i: v) {
        cout << i << " ";
    }
}
