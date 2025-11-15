#include<iostream>
using namespace std;

int readNumber(){
	
	int num;
	cout<<"please enter a number: ";
	cin>>num;
	
	return num;
}

void printTheFactorial(int num){
	
	cout<<"The factorial of 2 is: "<<num * num<<endl;
	cout<<"The factorial of 3 is: "<<num * num * num<<endl;
	cout<<"The factorial of 4 is: "<<num * num * num * num<<endl;
}


int main(){
	
	printTheFactorial(readNumber());
	
	return 0;
}
