#include<iostream>
#include<cmath>
#define PI 3.14159
using namespace std;

float readRadius(){
	
	float radius;
	
	cout<<"please enter the radius: ";
	cin>>radius;
	
	return radius;
}

float circleArea(float radius){
	
	return PI * pow(radius, 2);
}

void printArea(float radius){
	
	cout<<"The triangle area is: "<<circleArea(radius);
}

int main(){
	
	printArea(readRadius());
	
	return 0;
}
