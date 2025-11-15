#include<iostream>
using namespace std;

float readBillValue(){
	float bill;
	cout<<"please enter Bill Value: ";
	cin>>bill;
	
	return bill;
}

float totalBill(float bill){
	
	return (bill * 1.1) * 1.16;
}

void printTotalBill(float bill){
	
	cout<<"The Total Bill is: "<<totalBill(bill);
}

int main(){
	
	printTotalBill(readBillValue());
	
	return 0;
}
