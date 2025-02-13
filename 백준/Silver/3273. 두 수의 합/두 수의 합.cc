#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

const int MAX = 2'000'000;
int arr[MAX + 1];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        arr[a]++;
    }

    int x;
    cin >> x;

    int cnt = 0;

    for (int i = 1; i < (x + 1) / 2; i++) {
        int target = x - i;
        if (arr[i] && arr[target]) {
            cnt += arr[i] * arr[target];
        }
    }
    cout << cnt;
}