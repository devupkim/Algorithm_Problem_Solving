#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int s[10];

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n > 0) {
        s[n % 10]++;
        n /= 10;
    }

    s[6] = s[9] = (s[6] + s[9] + 1) / 2;
    int max = 0;
    for (auto &i: s) {
        if (max < i) max = i;
    }
    cout << max;

}