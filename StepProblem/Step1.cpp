// Backjoon Step Problem Solving
// Step1: 입출력과 사칙연산

// Step1-1
//https://www.acmicpc.net/problem/2557
#include <iostream>
int main() {
    std::cout<<"Hello World!";
}

// Step1-2
//https://www.acmicpc.net/problem/10718
#include<iostream>
int main(){
    std::cout<<"강한친구 대한육군\n강한친구 대한육군";
}

// Step 1-3
//https://www.acmicpc.net/problem/1000
#include<iostream>
int main(){
    int a,b;
    std::cin>>a>>b;
    std::cout<<a+b;
}

// Step 1-4
//https://www.acmicpc.net/problem/1001
#include<iostream>
int main(){
    int a,b;
    std::cin>>a>>b;
    std::cout<<a-b;
}

// Step 1-5
// https://www.acmicpc.net/problem/10998
#include<iostream>
int main(){
    int a,b;
    std::cin>>a>>b;
    std::cout<<a*b;
}

// Step 1-6
// https://www.acmicpc.net/problem/1008
#include<iostream>
int main(){
    double a,b,c;
    std::cin>>a>>b;
    std::cout<<std::fixed;//소숫점 아래부터 유효숫자 세기
    std::cout.precision(9);//유효숫자 9개로 지정하겠다(제시된 유효숫자가 소숫점아래 10^-9까지이므로)
    std::cout<<a/b;
}
