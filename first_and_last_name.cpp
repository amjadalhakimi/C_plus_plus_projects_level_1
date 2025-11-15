#include<iostream>
using namespace std;

struct stName{
	
	string first_name;
	string last_name;
};

stName readFullName(){
	
	stName userName;
	
	cout<<"please enter your first name: ";
	cin>>userName.first_name;
	
	cout<<"please enter your last name: ";
	cin>>userName.last_name;
	
	return userName;
}

string getFullName(stName userName, bool isReversed=false){
	
	if(isReversed){
		return userName.last_name + " " +  userName.first_name;
	}else{
		return userName.first_name + " " +  userName.last_name;
	}
}

void printFullName(string userFullName){
	
	cout<<"Your full name is: "<<userFullName<<endl;
}

int main(){
	
	printFullName(getFullName(readFullName()));
	
	return 0;
}
