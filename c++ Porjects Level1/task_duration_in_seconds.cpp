#include<iostream>
using namespace std;

struct stDuration{
	
	int days;
	int hours;
	int minutes;
	int seconds;
};

stDuration readDuration(){
	
	stDuration time;
	
	cout<<"please enter the time duration in days: ";
	cin>>time.days;
	
	cout<<"please enter the time duration in hours: ";
	cin>>time.hours;
	
	cout<<"please enter the time duration in minutes: ";
	cin>>time.minutes;
	
	cout<<"please enter the time duration in seconds: ";
	cin>>time.seconds;
	
	return time;
}

int timeInSeconds(stDuration time){
	
	int seconds = time.seconds;
	int minutes = time.minutes * 60;
	int hours = time.hours * 3600;
	int days = time.days * 86400;
	
	return seconds + minutes + hours + days;
}

void printTimeInSeconds(stDuration time){
	cout<<"The time you enter in seocnds is: "<<timeInSeconds(time);
}

int main(){
	
	printTimeInSeconds(readDuration());
	
	return 0;
}
