#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

void isRA(int L,int m, int n){
    
    if(L*L==m*m+n*n){
        cout << "right" << endl;
    }
    else{
        cout << "wrong" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,c;
    int L;
    
    while(true){
        cin >> a >> b >> c;
        if(a==0) break;
        if(a>=b&&a>=c) isRA(a,b,c);
        else if(b>=a&&b>=c) isRA(b,a,c);
        else isRA(c,a,b);
    }
}