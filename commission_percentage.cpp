#include<iostream>
using namespace std;

int readTotalSales(){
	
	int num;
	cout<<"please enter your total sales: ";
	cin>>num;
	
	return num;
}
float getPrecentage(int total_sales){
	
	if(total_sales >= 1000000){
		return 0.01;
	}else if(total_sales >= 500000){
		return 0.02;
	}else if(total_sales >= 100000){
		return 0.03;
	}else if(total_sales >= 50000){
		return 0.05;
	}else{
		return 0;
	}
}

float getTotalCommission(int total_sales){
	
	return total_sales * getPrecentage(total_sales);
}

void printTotalCommission(int total_sales){
	
	cout<<"The total commission is: "<<getTotalCommission(total_sales);
}

int main(){
	
	printTotalCommission(readTotalSales());
	
	
	return 0;
}
