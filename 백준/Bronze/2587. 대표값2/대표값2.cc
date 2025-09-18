#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v(5);
    int sum = 0;
    for (auto &i: v) {
        cin >> i;
        sum += i;
    }
    cout << sum / v.size() << endl;
    sort(v.begin(), v.end());
    cout << v[2];
}
