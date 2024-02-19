#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N;
    for(int i=1;i<=9;i++){
        cout << N << " * " << i << " = " << N*i << endl;
    }
    
}