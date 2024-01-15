#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> dq;

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string str;
        int a;
        cin >> str;
        if (str == "push_back") {
            cin >> a;
            dq.push_back(a);
        } else if (str == "push_front") {
            cin >> a;
            dq.push_front(a);
        } else if (str == "front") {
            if (dq.empty()) {
                cout << -1 << endl;
            } else {
                cout << dq.front() << endl;
            }
        } else if (str == "back") {
            if (dq.empty()) {
                cout << -1 << endl;
            } else
                cout << dq.back() << endl;


        } else if (str == "empty") {
            if (dq.empty()) {
                cout << '1' << endl;
            } else {
                cout << '0' << endl;
            }
        } else if (str == "size") {
            cout << dq.size() << endl;
        } else if (str == "pop_front") {
            if (!dq.empty()) {
                cout << dq.front() << endl;
                dq.pop_front();
            } else
                cout << -1 << endl;

        } else if (str == "pop_back") {
            if (!dq.empty()) {
                cout << dq.back() << endl;
                dq.pop_back();
            } else
                cout << -1 << endl;
        }
    }
}