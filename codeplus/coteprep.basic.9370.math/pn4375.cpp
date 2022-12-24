#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	int digit,num;
	unsigned long multiple;

	cin >> str;
	digit=str.size();
	num=stoi(str);
	str.erase();

	for(int i=0;i<digit;i++)
		str.append("1");
	multiple=stoul(str);

	if(num==multiple){
		cout << digit <<"\n";
	}
	else{
		while(multiple%num!=0){
			multiple=multiple*10+1;
			digit++;
		}
		cout << digit<<"\n";
	}
	return 0;
}
