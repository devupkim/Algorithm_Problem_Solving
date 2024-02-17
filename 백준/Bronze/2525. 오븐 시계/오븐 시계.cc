#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,c;
    cin >> a >> b >> c;
    int h = a+c/60;
    int m = b+c%60;
    
    if(m>=60){
        h=h+1;
        m=m-60;
    }
    if(h>=24) h=h-24;
    cout << h << " " << m << endl;
    return 0;
}