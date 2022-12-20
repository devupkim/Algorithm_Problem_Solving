// Backjoon Step Problem Solving
// Step2 조건문

// Step2-1
// https://www.acmicpc.net/problem/1330
#include<iostream>
int main(){
        int a,b;
        std::cin>>a>>b;
        if(a>b){
                std::cout<<">";
        }
        else if(a<b){
                std::cout<<"<";
        }
        else{
                std::cout<<"==";
        }
        return 0;
}

// Step2-2
// https://www.acmicpc.net/problem/9498 
#include<iostream>
int main(){
        int a;
        std::cin>>a;
        if(a>=90){                std::cout<<"A";        }
        else if(a>=80){                std::cout<<"B";        }
        else if(a>=70){                std::cout<<"C";        }
        else if(a>=60){                std::cout<<"D";        }
        else{                std::cout<<"F";        }
        return 0;
}

// Step2-3
// https://www.acmicpc.net/problem/2753
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%4==0){
        if((n%100!=0)||(n%400==0)){
            cout<<'1'<<endl;
        }
        else
            cout<<'0'<<endl;
    }
    else
        cout<<'0'<<endl;
    return 0;
}

// Step2-4
// https://www.acmicpc.net/problem/14681
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    if(a>0){
        if(b>0) cout<<"1"<<endl;
        else cout<<"4"<<endl;
    }
    else{
         if(b>0) cout<<"2"<<endl;
         else cout<<"3"<<endl;
    }
    return 0;
}

// Step2-5


// Step2-6


// Step2-7

