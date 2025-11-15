#include<iostream>
#include<cmath>
#define PI 3.14159
using namespace std;

float readArea(){
	
	float A;
	
	cout<<"please enter the square area: ";
	cin>>A;
	
	return A;
}

float circleAreaSquare(float A){
	
	return (PI * pow(A, 2)) / 4;
}

void printArea(float A){
	
	cout<<"The circle area is: "<<circleAreaSquare(A);
}

int main(){
	
	printArea(readArea());
	
	return 0;
}
