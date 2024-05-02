#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[26] = {0,};

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        a[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        cout << a[i] << " ";
    }

    return 0;
}