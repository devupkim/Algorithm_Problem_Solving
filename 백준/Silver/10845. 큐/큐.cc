#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    queue<int> q;
    while (N--) {
        string s;
        cin >> s;
        if (s == "push") {
            int m;
            cin >> m;
            q.push(m);
        } else if (s == "pop") {
            if (q.empty()) {
                cout << -1 << endl;
            } else {
                cout << q.front() << endl;
                q.pop();
            }
        } else if (s == "size") {
            cout << q.size() << endl;
        } else if (s == "empty") {
            cout << q.empty() << endl;
        } else if (s == "back") {
            if (q.empty()) {
                cout << -1 << endl;
            } else{
                cout << q.back() << endl;
            }
        } else { //front
            if (q.empty()) {
                cout << -1 << endl;
            } else{
                cout << q.front() << endl;
            }
        }

    }
}