#include<iostream>
using namespace std;

struct stArea{
	
	float height;
	float width;
};

stArea readArea(){
	
	stArea area;
	
	cout<<"please enter the height: ";
	cin>>area.height;
	
	cout<<"please enter the width: ";
	cin>>area.width;
	
	return area;
}

float rectangleArea(stArea area){
	
	return area.height * area.width;
}

void printArea(stArea area){
	
	cout<<"The rectangle area is: "<<rectangleArea(area);
}

int main(){
	
	printArea(readArea());
	
	return 0;
}
