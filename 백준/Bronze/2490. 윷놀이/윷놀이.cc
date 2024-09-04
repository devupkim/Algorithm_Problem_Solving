#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 3;
    while (n--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vector<int> v = {a, b, c, d};
        int p = count(v.begin(), v.end(), 0);

        switch (p) {
            case 0:
                cout << "E" << endl;
                break;
            case 1:
                cout << "A" << endl;
                break;
            case 2:
                cout << "B" << endl;
                break;
            case 3:
                cout << "C" << endl;
                break;
            case 4:
                cout << "D" << endl;
                break;
        }
    }
}