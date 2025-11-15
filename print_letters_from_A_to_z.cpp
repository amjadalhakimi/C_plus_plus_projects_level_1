#include<iostream>
using namespace std;

void printCapitalLetters(){
	
	for(int i=65; i<=90; i++){
		cout<<char(i);
	}
}

void printSmallLetters(){
	
	for(int i=97; i<=122; i++){
		cout<<char(i);
	}
}

void printBothLetters(){
	
	for(int i=65; i<=90; i++){
		cout<<char(i)<<char(i+32);
	}
}

void printLetters(){
	
	cout<<"Capital"<<endl;
	printCapitalLetters();
	cout<<"\nSmall"<<endl;
	printSmallLetters();
	cout<<"\nBoth"<<endl;
	printBothLetters();
}

int main(){
	
	printLetters();
	
	return 0;
}
