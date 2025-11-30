#include<iostream>
using namespace std;

struct stPower{
	int base;
	int power;
};

stPower readNumber(){
	
	stPower factorial;
	cout<<"please enter the base: ";
	cin>>factorial.base;
	
	cout<<"please enter the power: ";
	cin>>factorial.power;
	
	return factorial;
}


int powerOfN(int num, int power){
	
	if(power == 0){
		return 1;
	}
	
	int result = num;
	for(int i=1; i<power; i++){
		result *=num;
	}
	
	return result;
}



void printTheFactorial(stPower factorial){
	
	cout<<"The factorial of the number is: "<<powerOfN(factorial.base, factorial.power)<<endl;
}


int main(){
	
	printTheFactorial(readNumber());
	
	return 0;
}
