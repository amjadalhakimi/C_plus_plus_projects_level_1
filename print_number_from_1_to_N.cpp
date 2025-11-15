#include<iostream>
using namespace std;

int readNumber(){
	int num;
	cout<<"please enter a number: ";
	cin>>num;
	
	return num;
}

void printFrom1ToNUsingFor(int num){
	cout<<"\nThis is with for loop\n";
	for(int i=1; i<=num; i++){
		cout<<i<<endl;
	}
}

void printFrom1ToNUsingWhile(int num){
	cout<<"\nThis is with while loop\n";
	int i=1;
	while(i<=num){
		cout<<i<<endl;
		i++;
	}
}

void printFrom1ToNUsingDoWhile(int num){
	cout<<"\nThis is with do while loop\n";
	int i=1;
	do{
		cout<<i<<endl;
		i++;
	}while(i<=num);
}

int main(){
	int num = readNumber();
	printFrom1ToNUsingFor(num);
	printFrom1ToNUsingWhile(num);
	printFrom1ToNUsingDoWhile(num);
	
	return 0;
}
