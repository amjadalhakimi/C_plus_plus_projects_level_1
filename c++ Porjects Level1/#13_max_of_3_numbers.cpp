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

float maxOf3Numbers(stNumbers numbers){
	
	float max = 0;
	
	if(numbers.num1 > numbers.num2){
		if(numbers.num1 > numbers.num3){
			max = numbers.num1;
		}else{
			max = numbers.num3;			
		}
	}else{
		if(numbers.num2 > numbers.num3){
			max = numbers.num2;
		}else{
			max = numbers.num3;			
		}	
	}
	
	return max;
}

void printResult(stNumbers numbers){
	
	cout<<"The biggest number is: "<<maxOf3Numbers(numbers)<<endl;
}

int main(){
	
	printResult(readNumbers());
	
	return 0;
}
