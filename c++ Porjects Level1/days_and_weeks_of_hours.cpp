#include<iostream>
using namespace std;

int readNumberOfHours(){
	
	int hours;
	cout<<"please enter the hours: ";
	cin>>hours;
	
	return hours;
}

float hoursToDays(float hours){
	
	return hours / 24;
}
float hoursToWeeks(float hours){
	
	return hoursToDays(hours) / 7;
}

void printDaysWeeks(float hours){
	
	cout<<"The number of days is : "<<hoursToDays(hours)<<endl;
	cout<<"The number of Weeks is: "<<hoursToWeeks(hours)<<endl;
}

int main(){
	
	printDaysWeeks(readNumberOfHours());
	
	return 0;
}
