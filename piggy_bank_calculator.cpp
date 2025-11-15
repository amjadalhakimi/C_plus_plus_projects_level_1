#include<iostream>
using namespace std;

struct stPiggyBank{
	
	int pennies;
	int nickels;
	int dimes;
	int quarters;
	int dollors;
};

stPiggyBank readPiggyBank(){
	
	stPiggyBank money;
	
	cout<<"How many pennies do you have: ";
	cin>>money.pennies;
	cout<<"How many nickels do you have: ";
	cin>>money.nickels;
	cout<<"How many dimes do you have: ";
	cin>>money.dimes;
	cout<<"How many quarters do you have: ";
	cin>>money.quarters;
	cout<<"How many dollors do you have: ";
	cin>>money.dollors;
	
	return money;
}

int totalPennies(stPiggyBank money){
	
	return money.pennies + money.nickels*5 + money.dimes*10 + money.quarters*25 + money.dollors*100;
}

float totalDollors(stPiggyBank money){
	
	return (float)totalPennies(money) / 100;
}

void printTotalPenniesAndDollors(stPiggyBank money){
	
	cout<<"The total pennies are: "<<totalPennies(money)<<endl;
	cout<<"The total pennies are: "<<totalDollors(money)<<endl;
}

int main(){
	
	printTotalPenniesAndDollors(readPiggyBank());
	
	return 0;
}
