#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int N;

string a = "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
string b = "\"재귀함수가 뭔가요?\"\n";
string c = "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
string d = "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
string e = "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
string f="\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
string g = "라고 답변하였지.\n";

void underbar(int n) {
    for (int i = 0; i < N - n; i++) {
        cout << "____";
    }
}

void recursion(int n) {
    if (n == 0) {
        underbar(n);
        cout << b;
        underbar(n);
        cout << f;
         underbar(n);
         cout << g;
        return;
    }
    underbar(n);
    cout << b;
    underbar(n);
    cout << c;
    underbar(n);
    cout << d;
    underbar(n);
    cout << e;

    recursion(n-1);
    underbar(n);
    cout << g;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    cout << a;
    recursion(N);
    return 0;
}