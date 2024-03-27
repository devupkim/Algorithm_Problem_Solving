#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    string s;

    cin >> t >> s;

    int sum = 0;

    for (int i = 0; i < t; i++) {
        sum += s[i] - '0';
    }
    cout << sum;
    
    return 0;
}