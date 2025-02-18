#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string s1,s2;
        cin >> s1 >> s2;
        if (s1.length() != s2.length()) {
            cout << "Impossible" << "\n";
        } else {
            int a1['z' - 'a' + 1] = {0,};
            int a2['z' - 'a' + 1] = {0,};
            for (int j = 0; j < s1.length(); j++) {
                a1[s1[j] - 'a']++;
                a2[s2[j] - 'a']++;
            }
            bool isEqual = equal(begin(a1), end(a1), begin(a2), end(a2));
            if (isEqual) cout << "Possible" << "\n";
            else cout << "Impossible" << "\n";
        }
    }
}