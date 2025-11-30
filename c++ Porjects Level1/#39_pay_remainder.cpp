#include<iostream>
using namespace std; 

float readNumber(string message){
	
	float num;
	cout<<message;
	cin>>num;
	
	return num;
}

float calculateRemainder(){
	
	float total_bill = readNumber("Please enter the Total Bill: ");
	float cash_paied = readNumber("Please enter the Cash Paied: ");
	
	return cash_paied - total_bill;
}

void printRemainder(){
	
	cout<<"Your remainder is: "<<calculateRemainder();
}

int main(){
	
	printRemainder();
	
	return 0;
}
