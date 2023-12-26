#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int main() {
	fastio;
	
    int K;
    cin >> K;
    stack<int> S;
    
    while(K--){
        string str;
        cin >> str;
        if(str=="push"){
            int n;
            cin >> n;
            S.push(n);
        }
        else if(str=="pop"){
            if(S.empty()) cout << -1 << "\n";
            else {
                cout << S.top() << "\n";
                S.pop();
            }
        }
        else if(str=="top"){
            if(S.empty()) cout << -1 << "\n";
            else {
                cout << S.top() << "\n";
            }
        }
        else if(str=="size"){
            cout << S.size() <<"\n";
        }
        else{ //empty
            if(S.empty()) cout<< 1 << "\n";
            else {
                cout << 0 << "\n";
            }
        }
    }
}