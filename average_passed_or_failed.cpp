#include<iostream>
using namespace std;

struct stMarks{
	
	float mark1;
	float mark2;
	float mark3;
};

stMarks readMarks(){
	
	stMarks marks;
	
	cout<<"please enter the first mark: ";
	cin>>marks.mark1;
	
	cout<<"please enter the second mark: ";
	cin>>marks.mark2;
	
	cout<<"please enter the third mark: ";
	cin>>marks.mark3;
	
	return marks;
}

float sum3Marks(stMarks marks){
	
	return marks.mark1 + marks.mark2 + marks.mark3;
}

float average3Marks(stMarks marks){
	
	return sum3Marks(marks) / 3;
}
string checkPassedOrFailed(float avg){
	
	return (avg>=50) ? "passed" : "failed";
}
void printResult(stMarks marks){
	
	cout<<"The average of the 3 marks is: "<<average3Marks(marks)<<endl;
	cout<<"You have "<<checkPassedOrFailed(average3Marks(marks))<<endl;
}

int main(){
	
	printResult(readMarks());
	
	return 0;
}
