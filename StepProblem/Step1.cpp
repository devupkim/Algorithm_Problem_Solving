// Backjoon Step Problem Solving
// Step1: 입출력과 사칙연산

// Step1-1
//https://www.acmicpc.net/problem/2557
#include <iostream>
int main() {
    std::cout<<"Hello World!";
}

// Step1-2 //Erased
//https://www.acmicpc.net/problem/10718
#include<iostream>
int main(){
    std::cout<<"강한친구 대한육군\n강한친구 대한육군";
}

// Step 1-2
//https://www.acmicpc.net/problem/1000
#include<iostream>
int main(){
    int a,b;
    std::cin>>a>>b;
    std::cout<<a+b;
}

// Step 1-3
//https://www.acmicpc.net/problem/1001
#include<iostream>
int main(){
    int a,b;
    std::cin>>a>>b;
    std::cout<<a-b;
}

// Step 1-4
// https://www.acmicpc.net/problem/10998
#include<iostream>
int main(){
    int a,b;
    std::cin>>a>>b;
    std::cout<<a*b;
}

// Step 1-5
// https://www.acmicpc.net/problem/1008
#include<iostream>
int main(){
    double a,b,c;
    std::cin>>a>>b;
    std::cout<<std::fixed;//소숫점 아래부터 유효숫자 세기
    std::cout.precision(9);//유효숫자 9개로 지정하겠다(제시된 유효숫자가 소숫점아래 10^-9까지이므로)
    std::cout<<a/b;
}

// Step 1-6
// https://www.acmicpc.net/problem/10869
#include <iostream>

int main(){
    int a,b;
    std::cin>>a>>b;
    std::cout<<a+b<<std::endl;
    std::cout<<a-b<<std::endl;
    std::cout<<a*b<<std::endl;
    std::cout<<a/b<<std::endl;
    std::cout<<a%b<<std::endl;
    return 0;
}

// Step 1-7
// https://www.acmicpc.net/problem/10926
#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cin>>str;
    std::cout<<str<<"??!";
    return 0;
}

// Step 1-8
// https://www.acmicpc.net/problem/18108
#include<iostream>

int main(){
    int x;
    std::cin>>x;
    std::cout<<x-543;
    return 0;
}

// Step 1-9
// https://www.acmicpc.net/problem/3003
#include <iostream>
int main(){
    int a,b,c,d,e,f;
    std::cin>>a>>b>>c>>d>>e>>f;
    std::cout<<1-a<<" ";
    std::cout<<1-b<<" ";
    std::cout<<2-c<<" ";
    std::cout<<2-d<<" ";
    std::cout<<2-e<<" ";
    std::cout<<8-f;
    return 0;
}

// Step 1-10
// https://www.acmicpc.net/problem/10430
#include <iostream>
int main(){
    int a,b,c;
    std::cin>>a>>b>>c;
    std::cout<<(a+b)%c<<"\n"<<((a%c)+(b%c))%c<<"\n"<<(a*b)%c<<"\n"<<((a%c)*(b%c))%c;
    return 0;
}

// Step 1-11
// https://www.acmicpc.net/problem/2588
#include <iostream>
int main(){
        int a,b;
        std::cin>>a;
        std::cin>>b;
        std::cout<<(b%10)*a<<"\n"<<((b%100)-(b%10))*a/10<<"\n"<<((b-(b%100)))*a/100<<"\n"<<a*b;
        return 0;
}

// Step 1-12
// https://www.acmicpc.net/problem/10171
#include <iostream>
int main(){
        std::cout<<"\\    /\\\n"<<" )  ( \')\n"<<"(  /  )\n"<<" \\(__)|";
        return 0;
}

// Step 1-13
// https://www.acmicpc.net/problem/10172
#include <iostream>
int main(){
        std::cout<<"|\\_/|\n"<<"|q p|   /}\n"<<"( 0 )\"\"\"\\\n"<<"|\"^\"`    |\n"<<"||_/=\\"<<"\\__|";
        return 0;
}
