#include<iostream>
using namespace std;

int readNumber(){
	int num;
	cout<<"please enter a number: ";
	cin>>num;
	
	return num;
}

void printFromNTo1UsingFor(int num){
	cout<<"\nThis is with for loop\n";
	for(int i=num; i>=1; i--){
		cout<<i<<endl;
	}
}

void printFromNTo1UsingWhile(int num){
	cout<<"\nThis is with while loop\n";
	int i=num;
	while(i>=1){
		cout<<i<<endl;
		i--;
	}
}

void printFromNTo1UsingDoWhile(int num){
	cout<<"\nThis is with do while loop\n";
	int i=num;
	do{
		cout<<i<<endl;
		i--;
	}while(i>=1);
}

int main(){
	int num = readNumber();
	printFromNTo1UsingFor(num);
	printFromNTo1UsingWhile(num);
	printFromNTo1UsingDoWhile(num);
	
	return 0;
}
