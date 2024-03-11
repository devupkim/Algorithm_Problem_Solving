#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    pair<int *, int *> MinMaxVal = minmax_element(&nums[0], &nums[n]);
    cout << *MinMaxVal.first << " " << *MinMaxVal.second;
    return 0;
}
