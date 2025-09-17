#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

enum RESULT
{
    D,C,B,A,E
};


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=3;

    while (n--)
    {
        int a, b, c, d;
        cin >> a>>b>>c>>d;
        switch (static_cast<RESULT>(a+b+c+d))
        {
        case A:
            cout << "A\n";
            break;
        case B:
            cout << "B\n";
            break;
        case C:
            cout << "C\n";
            break;
        case D:
            cout << "D\n";
            break;
        case E:
            cout << "E\n";
            break;
        }

    }


}