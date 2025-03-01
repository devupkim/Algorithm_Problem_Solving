#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

list<char> keyLogger(string s) {
    list<char> L;
    auto cursor = L.begin();

    for (auto c: s) {
        if (c == '-') { //backspace
            if (cursor != L.begin()) {
                cursor--;
                cursor = L.erase(cursor);
            }
        } else if (c == '<') { // left arrow
            if (cursor != L.begin()) cursor--;
        } else if (c == '>') { // right arrow
            if (cursor != L.end()) cursor++;
        } else { // password
            L.insert(cursor, c);
        }
    }
    return L;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        list<char> L = keyLogger(s);
        for (auto i: L) {
            cout << i;
        }
        cout << "\n";
    }
}