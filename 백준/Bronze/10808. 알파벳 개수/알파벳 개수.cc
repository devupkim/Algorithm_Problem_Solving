#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr['z'-'a'+1]={0,};
    string s; cin >> s;
    
    for(char &i: s){
        arr[i-'a']++;
    }
    
    for(int &i: arr){
        cout << i <<" ";
    }
}

