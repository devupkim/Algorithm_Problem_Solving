#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;
bool a[2'000'001] = {false,};
vector<int> numbers;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        a[k] = true;
        numbers.push_back(k);
    }

    int x;
    cin >> x;

    int cnt = 0;
    for (int num : numbers) {
        if (x - num > 0 && a[x - num]) {
            if (num < x - num) cnt++;
        }
    }
    cout << cnt;
}