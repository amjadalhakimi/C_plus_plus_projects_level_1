#include<iostream>
#include<cmath>
#define PI 3.14159
using namespace std;

float readArea(){
	float l;
	cout<<"please enter along circumference: ";
	cin>>l;
	
	return l;
}

float circleAreaAlongCircumference(float l){
	
	return pow(l, 2) / (4 * PI) ;
}


void printArea(float l){
	
	cout<<"The area is: "<<circleAreaAlongCircumference(l);
}

int main(){
	printArea(readArea());
	
	return 0;
}
