#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

vector<int> a(9);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum = 0;
    for (auto &i: a) {
        cin >> i;
        sum += i;
    }
    sort(a.begin(), a.end());

    int x = 0;
    int y = 0;

    bool found = false;
    for (; x < a.size() - 1; x++) {
        for (y = x + 1; y < a.size(); y++) {
            if (a[x] + a[y] == sum - 100) {
                found = true;
                break;
            }
        }
        if (found) break;
    }

    for (auto &k: a) {
        if (k == a[x] || k == a[y]) continue;
        cout << k << "\n";
    }
}