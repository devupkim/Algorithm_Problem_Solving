#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    int mul = a * b * c;
    int num[10] = {0,};

    while (1) {
        num[mul % 10]++;
        if (mul < 10) break;
        mul /= 10;
    }

    for (auto &i: num) {
        cout << i << endl;
    }
}