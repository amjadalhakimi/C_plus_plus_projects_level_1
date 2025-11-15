#include<iostream>
#include<cmath>
using namespace std;

struct stArea{
	
	float side_area;
	float diagonal;
};

stArea readArea(){
	
	stArea area;
	
	cout<<"please enter the side area: ";
	cin>>area.side_area;
	
	cout<<"please enter the diagonal: ";
	cin>>area.diagonal;
	
	return area;
}

float rectangleAreaSideAndDiagonal(stArea area){
	
	return area.side_area * sqrt(pow(area.diagonal, 2) - pow(area.side_area, 2));
}

void printArea(stArea area){
	
	cout<<"The rectangle area is: "<<rectangleAreaSideAndDiagonal(area);
}

int main(){
	
	printArea(readArea());
	
	return 0;
}
