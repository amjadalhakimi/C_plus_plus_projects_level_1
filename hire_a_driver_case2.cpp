#include<iostream>
using namespace std;

struct stInfo{
	int age;
	bool license;
	bool recommendation;
};

stInfo readInfo(){
	
	stInfo userInfo;
	
	cout<<"please enter your age: ";
	cin>>userInfo.age;
	
	cout<<"Do you have driver license (1 or 0): ";
	cin>>userInfo.license;
	
	cout<<"Do you have recommendation (1, 0): ";
	cin>>userInfo.recommendation;
	
	return userInfo;
}


bool isAccepted (stInfo userInfo){
	
	return ((userInfo.recommendation) || (userInfo.age > 21 && userInfo.license == 1));
}

void printResult(stInfo userInfo){
	if(isAccepted(userInfo)){
		cout<<"You are Hired\n";
	}else{
		cout<<"You are Rejected\n";		
	}
}

int main(){
	
	printResult(readInfo());
	
	return 0;
}
