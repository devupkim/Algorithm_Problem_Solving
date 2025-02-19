#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int a[2][7];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    while (n--) {
        int gender, year;
        cin >> gender >> year;
        a[gender][year]++;
    }

    int res = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 1; j <= 6; j++) {
            res += a[i][j] / k;
            if (a[i][j] % k) res++;
        }
    }
    cout << res;
}