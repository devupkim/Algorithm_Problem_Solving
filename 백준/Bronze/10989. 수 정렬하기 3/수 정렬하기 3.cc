#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> v(10'001);

    while (N--) {
        int a;
        cin >> a;
        v[a]++;
    }

    for (int i = 1; i < 10'001; i++) {
        while (v[i]--) {
            cout << i << endl;
        }
    }
}