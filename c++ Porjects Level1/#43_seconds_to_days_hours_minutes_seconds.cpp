#include<iostream>
using namespace std;

int readNumberOfSeconds(){
	
	int seconds;
	cout<<"please enter the seconds: ";
	cin>>seconds;
	
	return seconds;
}

int getDays(int seconds){
	
	return seconds / 86400;
}

int getHours(int seconds){
	
	return seconds % 86400 / 3600;
}

int getMinutes(int seconds){
	
	return seconds % 3600 / 60;
}

int getSeconds(int seconds){
	
	return seconds % 60;
}

void printTheTime(int seconds){
	
	cout<<"The time is: "<<getDays(seconds)<<":"<<getHours(seconds);
	cout<<":"<<getMinutes(seconds)<<":"<<getSeconds(seconds)<<endl;
}
int main(){
	
	printTheTime(readNumberOfSeconds());
	
	return 0;
}
