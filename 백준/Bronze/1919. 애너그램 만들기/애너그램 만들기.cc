#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int a[26];
int b[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2;
    cin >> s1 >> s2;

    for (auto i: s1) {
        a[i - 'a']++;
    }
    for (auto i: s2) {
        b[i - 'a']++;
    }

    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        cnt += abs(a[i] - b[i]);
    }
    cout << cnt;
}