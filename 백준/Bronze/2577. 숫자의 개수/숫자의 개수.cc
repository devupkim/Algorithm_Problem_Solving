#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int num = a * b * c;
    string s = to_string(num);

    int arr[10] = {0,};

    for (int i = 0; i < s.length(); i++) {
        arr[num % 10]++;
        num /= 10;
    }

    for (int i = 0; i <= 9; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}