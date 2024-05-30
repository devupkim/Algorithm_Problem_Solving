#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int ab=stoi(to_string(a)+to_string(b));
    int ba=stoi(to_string(b)+to_string(a));
    int solution=0;
    
    if(ab>ba) solution=ab;
    else solution=ba;
    
    return solution;
}