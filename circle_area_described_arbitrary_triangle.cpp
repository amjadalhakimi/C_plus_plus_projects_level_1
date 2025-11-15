#include<iostream>
#include<cmath>
#define PI 3.14159
using namespace std;

struct stArea{
	float a;
	float b;
	float c;
};

stArea readArea(){
	
	stArea area;
	
	cout<<"please enter a: ";
	cin>>area.a;
	
	cout<<"please enter b: ";
	cin>>area.b;
	
	cout<<"please enter b: ";
	cin>>area.c;
	
	return area;
}

float circleAreaDescribedArbitararyTriangle(stArea area){
	
	float p = (area.a+area.b+area.c) / 2;
	
	return PI * pow((area.a*area.b*area.c)/(4*sqrt(p*(p-area.a)*(p-area.b)*(p-area.c))),2) ;
}


void printArea(stArea area){
	
	cout<<"The area is: "<<circleAreaDescribedArbitararyTriangle(area);
}

int main(){
	printArea(readArea());
	
	return 0;
}
