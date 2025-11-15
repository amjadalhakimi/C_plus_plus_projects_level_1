#include<iostream>
using namespace std;

struct stInfo{
	int age;
	bool license;
};

stInfo readInfo(){
	
	stInfo userInfo;
	
	cout<<"please enter your age: ";
	cin>>userInfo.age;
	
	cout<<"Do you have driver license (1 or 0): ";
	cin>>userInfo.license;
	
	return userInfo;
}


bool isAccepted (stInfo userInfo){
	
	return (userInfo.age > 21 && userInfo.license == 1);
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
