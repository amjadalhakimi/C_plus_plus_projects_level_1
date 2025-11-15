#include<iostream>
using namespace std;

int readNumber(){
	int num;
	cout<<"please enter a number: ";
	cin>>num;
	
	return num;
}

int sumOddNumbersFrom1ToNUsingFor(int num){
	int sum=0;
	for(int i=1; i<=num; i=i+2){
//		if(i%2==1){
			sum+=i;
//		}
	}
	return sum;
}

int sumOddNumbersFrom1ToNUsingWhile(int num){

	int i=1, sum=0;
	while(i<=num){
		if(i%2==1){
			sum+=i;
		}
		i++;
	}
	
	return sum;
}

int sumOddNumbersFrom1ToNUsingDoWhile(int num){
	
	int i=1, sum=0;
	do{
		if(i%2==1){
			sum+=i;
		}
		i++;
	}while(i<=num);
	
	return sum;
}

void printSumOddNumbers(int num){
	
	cout<<"\nThis is with for loop\n";
	cout<<"sum = "<<sumOddNumbersFrom1ToNUsingFor(num)<<endl;
	
	cout<<"\nThis is with while loop\n";
	cout<<"sum = "<<sumOddNumbersFrom1ToNUsingWhile(num)<<endl;
		
	cout<<"\nThis is with do while loop\n";
	cout<<"sum = "<<sumOddNumbersFrom1ToNUsingDoWhile(num)<<endl;
	
}

int main(){
	
	printSumOddNumbers(readNumber());
	
	return 0;
}
