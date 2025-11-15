#include<iostream>
using namespace std;

float readNumber(){
	float num;
	cout<<"please enter a number: ";
	cin>>num;
	
	return num;
}

float sumNumbers(){
	
	float sum = 0, num = 0;
	
	while(num != -99){
		sum += num;
		num = readNumber();
		cout<<num<<endl;
	}
	return sum;
}

void printSum(){
	cout<<"The sum of prevois numbers is: "<<sumNumbers();
}

int main(){
	printSum();
	
	return 0;
}
