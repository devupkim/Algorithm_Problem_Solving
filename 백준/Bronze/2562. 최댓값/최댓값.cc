#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(9);
    for (int i = 0; i < 9; i++) {
        cin >> v[i];
    }
    int max = *max_element(v.begin(), v.end());
    int max_index = max_element(v.begin(), v.end()) - v.begin()+1;
    cout << max << endl << max_index;

    return 0;
}
