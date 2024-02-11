#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N,M;
    cin >> N >> M;
    vector<vector<int>> a(N,vector<int>(M));
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> a[i][j];
        }
    }
    
    int K;
    cin >> M >> K;
    vector<vector<int>> b(M,vector<int>(K));
    for(int i=0;i<M;i++){
        for(int j=0;j<K;j++){
            cin >> b[i][j];
        }
    }
    
    vector<vector<int>> c(N,vector<int>(K));
    
    for(int i=0;i<N;i++){
        for(int j=0;j<K;j++){
            for(int m=0;m<M;m++){
                c[i][j] += a[i][m] * b[m][j];
            }
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}