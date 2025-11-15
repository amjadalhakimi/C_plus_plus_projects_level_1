#include<iostream>
using namespace std;

struct stNumbers{
	
	float num1;
	float num2;
};

stNumbers readNumbers(){
	
	stNumbers numbers;
	
	cout<<"please enter the first number: ";
	cin>>numbers.num1;
	
	cout<<"please enter the second number: ";
	cin>>numbers.num2;
	
	return numbers;
}

float maxOf2Numbers(stNumbers numbers){
	
	return (numbers.num1 > numbers.num2)? numbers.num1 : numbers.num2;
}

void printResult(stNumbers numbers){
	
	cout<<"The biggest number is: "<<maxOf2Numbers(numbers)<<endl;
}

int main(){
	
	printResult(readNumbers());
	
	return 0;
}
