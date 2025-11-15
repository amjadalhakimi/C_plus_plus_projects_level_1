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

void swapOf2Numbers(stNumbers &numbers){
	
	float temp = numbers.num1;
	numbers.num1 = numbers.num2;
	numbers.num2 = temp;
}

void printResult(stNumbers numbers){
	
	cout<<"_______________________________\n";
	cout<<"This is before swapping \n";
	cout<<"The first number is: "<<numbers.num1<<endl;
	cout<<"The second number is: "<<numbers.num2<<endl;
	
	swapOf2Numbers(numbers);
	
	cout<<"_______________________________\n";
	cout<<"This is after swapping \n";
	cout<<"The first number is: "<<numbers.num1<<endl;
	cout<<"The second number is: "<<numbers.num2<<endl;
}

int main(){
	
	printResult(readNumbers());
	
	return 0;
}
