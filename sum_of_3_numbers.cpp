#include<iostream>
using namespace std;

struct stNumbers{
	
	float num1;
	float num2;
	float num3;
};

stNumbers readNumbers(){
	
	stNumbers numbers;
	
	cout<<"please enter the first number: ";
	cin>>numbers.num1;
	
	cout<<"please enter the second number: ";
	cin>>numbers.num2;
	
	cout<<"please enter the third number: ";
	cin>>numbers.num3;
	
	return numbers;
}

float sum3Numbers(stNumbers numbers){
	
	return numbers.num1 + numbers.num2 + numbers.num3;
}

void printResult(stNumbers numbers){
	
	cout<<"The sum of the numbers is: "<<sum3Numbers(numbers)<<endl;
}

int main(){
	
	printResult(readNumbers());
	
	return 0;
}
