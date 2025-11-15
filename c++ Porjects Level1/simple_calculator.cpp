#include<iostream>
using namespace std;

struct stCalculator{
	int num1;
	int num2; 
	char op;
};

stCalculator readNumbers(){
	
	stCalculator calculator;
	
	cout<<"please enter number1: ";
	cin>>calculator.num1;
	cout<<"please enter number2: ";
	cin>>calculator.num2;
	cout<<"please enter operation: ";
	cin>>calculator.op;
	
	return calculator;
}

float calculateNumbers(int num1, int num2, char op){
	
	switch(op){
		case '+':
			return num1 + num2;
		case '-':
			return num1 - num2;
		case '*':
			return num1 * num2;
		case '/':
			return num1 / num2;
		default:
			cout<<"You didn't enter one of the operations (+, -, *, / )\n";
			return -1;
	}
		
}

void printResult(stCalculator calculator){
	
	cout<<"The result is: "<<calculateNumbers(calculator.num1, calculator.num2, calculator.op);
}

int main(){
	printResult(readNumbers());
	
	return 0;
}
