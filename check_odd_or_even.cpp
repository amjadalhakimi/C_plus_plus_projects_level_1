#include<iostream>
using namespace std;

int readNumber(){
	int num;
	cout<<"please enter a number: ";
	cin>>num;
	
	return num;
}

string checkOddOrEven(int num){
	if(num % 2 == 0){
		return "Even";
	}else{
		return "Odd";
	}
}

int main(){
	
	cout<<checkOddOrEven(readNumber());
	
	return 0;
}
