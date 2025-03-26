#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int n;
deque<int> q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    if (n == 0) cout << "0";
    else {
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            q.push_back(a);
        }

        sort(q.begin(), q.end());

        int cutNum = round(n * 0.15);

        for (int i = 0; i < cutNum; ++i) {
            q.pop_back();
            q.pop_front();
        }

        int avgClass = round(accumulate(q.begin(), q.end(), 0) / static_cast<double>(q.size()));

        cout << avgClass;
    }
}