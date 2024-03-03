#include <iostream>
using namespace std;

int main() {
    int X;
    int N;
    int a,b;
    int sum=0;
    
    cin >> X;
    cin >> N;
    while(N--){
        cin >> a >> b;
        sum+=a*b;
    }
    if(sum==X){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}