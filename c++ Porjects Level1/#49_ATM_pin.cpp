#include<iostream>
using namespace std;

int readPIN(){
	
	int num; 
	cout<<"please enter the ATM PIN: ";
	cin>>num;
	
	return num;
}

bool checkPIN(int pin){
	
	if(pin == 1234){
		return true;
	}
	
	return false;
}

void printMessage(int pin){
	
	while(!checkPIN(pin)){
		cout<<"Wrong PIN!"<<endl;
		system("color 4F");
		pin = readPIN();
		
	}
	
	cout<<"Your balance is: 7500"<<endl;
	system("color 2F");

}

int main(){
	
	printMessage(readPIN());

	return 0;
}
