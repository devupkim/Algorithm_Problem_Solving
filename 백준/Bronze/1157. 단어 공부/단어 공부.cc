#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[26] = {0,};

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if ('A' <= s[i] && s[i] <= 'Z') {//대문자일 때
            a[s[i] - 'A']++;
        } else {//소문자일 때
            a[s[i] - 'a']++;
        }
    }

    int max_index = 0;
    int max = 0;
    for (int i = 0; i < 26; i++) {
        if (a[i] > max) {
            max_index = i;
            max = a[i];
        }
    }

    int cnt = 0;

    for (int i = 0; i < 26; i++) {
        if (max == a[i]) cnt++;
    }

    if (cnt > 1) {
        cout << "?";
    } else {
        cout << static_cast<char>(max_index + 'A');
    }

    return 0;
}