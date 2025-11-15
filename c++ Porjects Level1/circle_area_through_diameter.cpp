#include<iostream>
#include<cmath>
#define PI 3.14159
using namespace std;

float readDiameter(){
	
	float diameter;
	
	cout<<"please enter the radius: ";
	cin>>diameter;
	
	return diameter;
}

float circleAreaDiameter(float diameter){
	
	return (PI * pow(diameter, 2)) / 4;
}

void printArea(float diameter){
	
	cout<<"The triangle area is: "<<circleAreaDiameter(diameter);
}

int main(){
	
	printArea(readDiameter());
	
	return 0;
}
