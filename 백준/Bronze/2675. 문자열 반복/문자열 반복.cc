#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    while(n--){
        int m;
        string s;
        cin >> m >> s;
        int s_size=size(s);
        for(int i=0;i<s_size;i++){
            for(int j=0;j<m;j++) {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}