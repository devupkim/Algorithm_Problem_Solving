#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int sum=0; long long mtp=1;
    for(auto i:num_list) sum+=i;
    for(auto i:num_list) mtp*=i;
    return sum*sum>=mtp ? 1 : 0;
}