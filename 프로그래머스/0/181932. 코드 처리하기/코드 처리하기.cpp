#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    bool mode = false;
    string ret;

    for (int i = 0; i < code.length(); i++) {
        if (!mode) {//mode가 0일때
            if (code[i] == '1') {
                mode = !mode;
            } else if (code[i] != '1' && i % 2 == 0) {
                ret += code[i];
            }
        } else {//mode가 1일때
            
            if (code[i] == '1') {
                mode = !mode;
            } else if (code[i] != '1' && i % 2 == 1) {
                ret += code[i];
            }
        }
    }

    string answer;
    if (ret.empty()) answer = "EMPTY";
    else { answer = ret; }

    return answer;
}