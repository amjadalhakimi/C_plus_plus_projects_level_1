#include<iostream>
using namespace std;

int readNumber(){
	int num;
	while (num <= 0){
		cout<<"please enter a number > 0: ";
		cin>>num;
	}
	
	return num;
}

bool isPrime(int num){
	
	for(int i=2; i<num; i++){
		if(num % i == 0){
			return false;
		}
	}
	
	return true;
}

void printPrimeOrNot(){
	if(isPrime(readNumber())){
		cout<<"Prime\n";
	}else{
		cout<<"Not prime\n";
	}
}

int main(){
	
	printPrimeOrNot(); 
	
	return 0;
}
