#include<iostream>
using namespace std;

int readNumber(){
	
	int num;
	cout<<"please enter a number: ";
	cin>>num;
	
	return num;
}

int sumEvenNumbersFrom1ToNUsingFor(int num){
	
	int sum=0;
	for(int i=1; i<=num; i++){
		if(i%2==0){
			sum+=i;
		}
	}
	return sum;
}

int sumEvenNumbersFrom1ToNUsingWhile(int num){

	int i=1, sum=0;
	while(i<=num){
		if(i%2==0){
			sum+=i;
		}
		i++;
	}
	
	return sum;
}

int sumEvenNumbersFrom1ToNUsingDoWhile(int num){
	
	int i=1, sum=0;
	do{
		if(i%2==0){
			sum+=i;
		}
		i++;
	}while(i<=num);
	
	return sum;
}

void printSumEvenNumbers(int num){
	
	cout<<"\nThis is with for loop\n";
	cout<<"sum = "<<sumEvenNumbersFrom1ToNUsingFor(num)<<endl;
	
	cout<<"\nThis is with while loop\n";
	cout<<"sum = "<<sumEvenNumbersFrom1ToNUsingWhile(num)<<endl;
		
	cout<<"\nThis is with do while loop\n";
	cout<<"sum = "<<sumEvenNumbersFrom1ToNUsingDoWhile(num)<<endl;
	
}

int main(){
	
	printSumEvenNumbers(readNumber());
	
	return 0;
}
