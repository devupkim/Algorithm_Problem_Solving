#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c; cin>>a>>b>>c;
    if (a==b && b==c && c==a)
        cout << 10000+a*1000;
    else if (a==b)
        cout << 1000+a*100;
    else if (b==c)
        cout << 1000+b*100;
    else if (c==a)
        cout << 1000+a*100;
    else
    {
        if (a>b && a>c) cout << a*100;
        else if (b>a && b>c) cout << b*100;
        else cout << c*100;
    }


}
