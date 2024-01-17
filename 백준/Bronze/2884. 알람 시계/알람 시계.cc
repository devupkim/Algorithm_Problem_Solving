#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    if (M >= 45) {
        cout << N << ' ' << M - 45 << endl;
    } else {
        if (N == 0) N = 24;
        cout << N - 1 << ' ' << M + 15 << endl;
    }
}