#include<iostream>
using namespace std;

int readNumber(){
	
	int num;
	cout<<"please enter a number: ";
	cin>>num;
	
	return num;
}

float halfOfTheNumber(int num){
	
	return (float) num / 2;
}

void printhalfOfTheNumber(float num){

	cout<<"Half of the number is: "<<halfOfTheNumber(num)<<endl;
}

int main(){

	printhalfOfTheNumber(readNumber());
	
	return 0;
}
