#include<iostream>
using namespace std;

bool validateNumberInRange(int number, int from, int to){
	
	return (number >= from && number <= to);
}

int readAge(){
	
	int age;
	cout<<"please enter your age: ";
	cin>>age;
	
	return age;
}

void printAge(int age){
	
	if(validateNumberInRange(age, 18, 45))
		cout<<age<<" is a valide age\n";
	else
		cout<<age<<" is NOT a valide age\n";
		
}

int main()
{
	printAge(readAge());
	
	return 0;
}
