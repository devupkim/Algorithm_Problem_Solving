#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int n,result=0;
    stack<int> s;
    
    cin >> n;
    
    while(n--){
        int k;
        cin >> k;
        if(k==0) s.pop();
        else s.push(k);
    }
    
    while(!s.empty()){
        result+=s.top();
        s.pop();
    }
    cout << result;
}