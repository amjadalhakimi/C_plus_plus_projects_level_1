#include<iostream>
using namespace std;

int readFactorialN(){
	
	int num;
	cout<<"please enter a number: ";
	cin>>num;
	
	return num;
}

int readPositiveNumber(int num){
	while(num < 0){
		cout<<"The number should be positive: ";
		cin>>num;
	}
	
	return num;
}

int getFactorialN(int num){
	
	num = readPositiveNumber(num);
	long int factorial = 1;
	for(int i=num; i>=1; i--){
		factorial *= i;
	}
	
	return factorial;
} 

void printFactorialN(int num){
	
	cout<<"The factorial is: "<<getFactorialN(num);
}

int main(){
	
	printFactorialN(readFactorialN());
	return 0;
}
