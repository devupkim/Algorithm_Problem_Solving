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
    cout << a + b - c << endl;

    cout << stoi(to_string(a) + to_string(b)) - c;

    return 0;
}