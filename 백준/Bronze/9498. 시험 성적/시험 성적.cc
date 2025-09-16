#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    if (x >= 90) cout << "A";
    else if (x >= 80) cout << "B";
    else if (x >= 70) cout << "C";
    else if (x >= 60) cout << "D";
    else cout << "F";
}