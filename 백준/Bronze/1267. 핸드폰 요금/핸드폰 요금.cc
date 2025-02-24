#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int yong = 0, min = 0;

    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        yong += (a / 30 + 1) * 10;
        min += (a / 60 + 1) * 15;
    }

    if (min < yong) {
        cout << "M" << " " << min;
    } else if (yong < min) {
        cout << "Y" << " " << yong;
    } else {
        cout << "Y" << " " << "M" << " " << yong;
    }
}