#include<iostream>
using namespace std;

struct stLoanMonth{
	
	float loan;
	float payment;
};

stLoanMonth readLoanAndPayment(){
	stLoanMonth loan_payment;
	
	cout<<"What is the loan amonut: ";
	cin>>loan_payment.loan;
	cout<<"How much per month: ";
	cin>>loan_payment.payment;
	
	return loan_payment;
}

int calculateMonths(stLoanMonth loan_payment){
	
	return loan_payment.loan / loan_payment.payment;
	
}

void printLoanAndPayment(stLoanMonth loan_payment){
	
	cout<<"The payment takes "<<calculateMonths(loan_payment)<<" months "<<endl;
}
int main(){
	
	printLoanAndPayment(readLoanAndPayment());
	return 0;
}
