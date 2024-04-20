#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    int min=999999999,max=-999999999;
    istringstream ss(s);
    string buf;
    while (getline(ss, buf, ' '))
    {
        if(stoi(buf)<min) min=stoi(buf);
        if(stoi(buf)>max) max=stoi(buf);
    }
    string answer = to_string(min)+" "+to_string(max);
    return answer;
}