#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int arr[201];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, v, t;
    cin >> n;
    while (n--) {
        cin >> t;
        arr[t + 100]++;
    }
    cin >> v;

    cout << arr[v + 100];
}