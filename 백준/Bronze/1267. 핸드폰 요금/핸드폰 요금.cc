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
    vector<int> v(n);
    int y = 0, m = 0;
    for (auto &i: v) {
        cin >> i;
        y += (i / 30 + 1) * 10;
        m += (i / 60 + 1) * 15;
    }

    cout << (y <= m ? "Y " : "") << (m <= y ? "M " : "") << (m <= y ? m : y);
}