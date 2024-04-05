#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int calcul = a * a + b * b + c * c + d * d + e * e;
    cout << calcul % 10;

    return 0;
}