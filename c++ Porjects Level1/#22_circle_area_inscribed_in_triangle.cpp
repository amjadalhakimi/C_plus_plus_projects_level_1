#include<iostream>
#include<cmath>
#define PI 3.14159
using namespace std;

struct stArea{
	float a;
	float b;
};


stArea readArea(){
	stArea area;
	
	cout<<"please enter a: ";
	cin>>area.a;
	
	cout<<"please enter b: ";
	cin>>area.b;
	
	return area;
}

float circleAreaInscribedTriangle(stArea area){
	
	return PI * (pow(area.b, 2) / 4) * ((2 * area.a - area.b) / (2 * area.a + area.b)) ;
}


void printArea(stArea area){
	
	cout<<"The area is: "<<circleAreaInscribedTriangle(area);
}

int main(){
	printArea(readArea());
	
	return 0;
}
