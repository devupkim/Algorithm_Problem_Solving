#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string str="";
    for(auto& i:arr){
        str+=i;
    }
    return str;
}