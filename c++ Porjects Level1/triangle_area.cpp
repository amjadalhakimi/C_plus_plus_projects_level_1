#include<iostream>
#include<cmath>
using namespace std;

struct stArea{
	
	float base;
	float height;
};

stArea readArea(){
	
	stArea area;
	
	cout<<"please enter the base: ";
	cin>>area.base;
	
	cout<<"please enter the height: ";
	cin>>area.height;
	
	return area;
}

float triangleArea(stArea area){
	
	return 0.5 * area.base * area.height;
}

void printArea(stArea area){
	
	cout<<"The triangle area is: "<<triangleArea(area);
}

int main(){
	
	printArea(readArea());
	
	return 0;
}
