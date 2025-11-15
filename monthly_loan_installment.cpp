#include<iostream>
using namespace std;

struct stLoanMonth{
	
	float loan;
	float months;
};

stLoanMonth readLoanAndMonths(){
	stLoanMonth loan_payment;
	
	cout<<"What is the loan amonut: ";
	cin>>loan_payment.loan;
	cout<<"How many months you need: ";
	cin>>loan_payment.months;
	
	return loan_payment;
}

int calculateMonths(stLoanMonth loan_payment){
	
	return loan_payment.loan / loan_payment.months;
	
}

void printLoanAndPayment(stLoanMonth loan_payment){
	
	cout<<"The payment should be "<<calculateMonths(loan_payment)<<" per month "<<endl;
}
int main(){
	
	printLoanAndPayment(readLoanAndMonths());
	return 0;
}
