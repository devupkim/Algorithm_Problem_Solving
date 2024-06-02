#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int tmp=stoi(to_string(a)+to_string(b));
    if(tmp>=2*a*b){
        return tmp;
    }
    else{
        return 2*a*b;
    }
}