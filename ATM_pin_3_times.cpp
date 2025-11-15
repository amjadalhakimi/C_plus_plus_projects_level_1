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

void printMessage(){
	
	for(int i=2; i>=0; i--){
		if(checkPIN(readPIN())){
			cout<<"Your balance is: 7500"<<endl;
			system("color 2F");
			return;
		}else{
			cout<<"Wrong PIN!"<<endl;
			system("color 4F");
			cout<<"You have "<<i<<" more tries"<<endl;
		}
		
	}
	cout<<"Your card has been locked Please call the bank!"<<endl;
	

}

int main(){
	
	printMessage();

	return 0;
}
