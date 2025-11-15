#include<iostream>
using namespace std;

bool validateNumberInRange(int number, int from, int to){
	
	return (number >= from && number <= to);
}

int readAge(){
	
	int age;
	do{
	cout<<"please enter your age: ";
	cin>>age;
	}while(!validateNumberInRange(age, 18, 45));
	
	return age;
}

void printAge(int age){
	
	sudo cout<<"Age is valid\n";
}

int main(){
	printAge(readAge());
	
	return 0;
}
