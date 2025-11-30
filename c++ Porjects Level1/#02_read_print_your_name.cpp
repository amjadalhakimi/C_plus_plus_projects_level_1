#include<iostream>
using namespace std;

string readYourName(){
	string name;
	cout<<"please enter your name: ";
	getline(cin, name);
	
	return name;
}

void printYourName(string name){
	
	cout<<"Your name is: "<<name<<endl;
}

int main(){
	
	printYourName(readYourName());
	
	return 0;
}
