#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int a[26];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;

    cin >> s;

    for (auto i: s) {
        a[i - int('a')] ++;
    }
    for (auto i: a) {
        cout << i << " ";
    }
    return 0;
}