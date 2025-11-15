#include<iostream>
using namespace std;

float readMark(){
	
	float mark;
	cout<<"please enter the mark: ";
	cin>>mark;
	
	return mark;
}

string checkPassedOrFailed(float mark){
	
	return (mark>=50) ? "passed" : "failed";
}

void printPassedOrFailed(float mark){
	
	cout<<"Your result is: "<<checkPassedOrFailed(mark)<<endl;
}

int main(){
	
	printPassedOrFailed(readMark());
	
	return 0;
}
