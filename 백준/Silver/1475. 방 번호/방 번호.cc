#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int arr[10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    int max = 0;
    int cnt = 0;

    cin >> n;

    for (auto i: n) {
        if (i == '6' || i == '9') cnt++;
        else {
            if (++arr[i - '0'] > max) max = arr[i - '0'];
        }
    }
    if (cnt > max * 2) {
        max = cnt / 2 + cnt % 2;
    }
    cout << max;
}