#include<iostream>
using namespace std;

int readGrade(){
	
	int num;
	cout<<"please enter your mark: ";
	cin>>num;
	
	return num;
}

bool checkNUmberInRange(int num, int from, int to){
	
	return (num >= from && num <= to);
}

string getGrade(int num){

	if(num>=90)
		return "A";
	else if(num>=80)
		return "B";
	else if(num>=70)
		return "C";
	else if(num>=60)
		return "D";
	else if(num>=50)
		return "E";
	else
		return "F";
}

void printGrade(int num){
	
	if(!checkNUmberInRange(num, 0, 100)){
		cout<< "your mark should be between 0 and 100 \n";
		return;
	}
		
	cout<<"Your Grade is: "<<getGrade(num);
}
int main(){
	
	printGrade(readGrade());
	
	return 0;
}
