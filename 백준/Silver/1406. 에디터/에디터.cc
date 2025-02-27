#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string init;
    cin >> init;
    list<char> L;

    for (auto i: init) {
        L.push_back(i);
    }

    auto cursor = L.end();

    int M;
    cin >> M;

    while (M--) {
        char op;
        cin >> op;

        if (op == 'L') { //커서 왼쪽으로 옮김
            if (cursor != L.begin()) cursor--;
        } else if (op == 'D') { // 커서 오른쪽으로 옮김
            if (cursor != L.end()) cursor++;
        } else if (op == 'B') { // 커서 왼쪽 삭제
            if (cursor != L.begin()) {
                cursor--;
                cursor = L.erase(cursor);
            }
        } else { // 문자 받아 커서 왼쪽에 추가
            char add;
            cin >> add;
            L.insert(cursor, add);
        }
    }

    for (auto i: L) {
        cout << i;
    }
}