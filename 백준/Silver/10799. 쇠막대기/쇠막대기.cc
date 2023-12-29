#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int result=0; //잘리는 쇠막대기 개수
    int stick_num_under_laser=0;
    
    string str; cin >> str;//입력받기
    stack<char> S;//괄호 판단을 위한 스택
    
    //입력받은 문자열에서 문자 하나씩 읽기
    for(int i=0;i<str.size();i++){
        int j=i+1;
        if(str[i]=='('){ // 여는 괄호를 만났을 때
            if(str[j]==')'){ // 바로 다음이 ')'이라면 괄호쌍(레이저)인 것
                // 아무것도 하지 않음, 레이저에 대한 작업은 다음 ')'이 나오면 아래에서 수행
            }
            else{ // 아니라면 쇠막대기의 시작인 것
                // -> 레이저 아래의 쇠막대기 개수 1개 추가 & 잘리는 쇠막대기 개수 1개 추가
                //S.push('(');
                stick_num_under_laser++;
                result++;
            }
        }
        else{ // ')'을 받았을 때
            j=i-1;
            if(str[j]=='('){ // 바로 이전이 '('이라면 괄호쌍
                // -> 레이저 아래의 쇠막대기 개수만큼 잘리는 쇠막대기 추가
                result+=stick_num_under_laser;
            }
            else{ // 쇠막대기의 끝
                //-> 레이저 아래의 쇠막대기 개수 1개 삭제
                stick_num_under_laser--;
            }
        }
    }
    cout << result;
}