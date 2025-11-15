#include<iostream>
using namespace std;

enum enDays{Jan=1, Feb=2, Mar=3, Apr=4, May=5, Jun=6, Jul=7, Aug=8, Sep=9, Oct=10, Nov=11, Dec=12};

int readNumberOfMonth(){
	
	int month;
	
	do{
	cout<<"please enter the number of month(1 to 12): ";
	cin>>month;
	}while(month < 1 || month > 12);
	
	return month;
}

string getMonthOfTheYear(int month){

    month = (enDays) month;

    switch (month)
    {
    case enDays::Jan:
        return "January";
    case enDays::Feb:
        return "February";
    case enDays::Mar:
        return "March";
    case enDays::Apr:
        return "April";
    case enDays::May:
        return "May";
    case enDays::Jun:
        return "June";
    case enDays::Jul:
        return "July";
    case enDays::Aug:
        return "August";
    case enDays::Sep:
        return "September";
    case enDays::Oct:
        return "October";
    case enDays::Nov:
        return "November";
    case enDays::Dec:
        return "December";
    default:
        return "Wrong number";
    }
}

void printMonthOfTheYear(int month){
    cout<<"The month is: "<<getMonthOfTheYear(month)<<endl;
}

int main(){

	printMonthOfTheYear(readNumberOfMonth());
	
	return 0;
}
