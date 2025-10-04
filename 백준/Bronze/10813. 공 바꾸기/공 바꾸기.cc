#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    iota(v.begin(), v.end(), 0);

    while (m--) {
        int a, b;
        cin >> a >> b;
        swap(v[a], v[b]);
    }

    for (int i = 1; i <= n; i++) {
        cout << v[i] << ' ';
    }
}
