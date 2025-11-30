#include<iostream>
using namespace std;

enum enDays{Saturday=1, Sunday=2, Monday=3, Tuesday=4, Wednesday=5, Thursday=6, Friday=7};

int readNumberOfDay(){
	
	int day;
	
	do{
	cout<<"please enter the number of day(1 to 7): ";
	cin>>day;
	}while(day < 1 || day > 7);
	
	return day;
}

string getDayOfTheWeek(int day){

    day = (enDays) day;

    switch (day)
    {
    case enDays::Saturday:
        return "Saturday";
    case enDays::Sunday:
        return "Sunday";
    case enDays::Monday:
        return "Monday";
    case enDays::Tuesday:
        return "Tuesday";
    case enDays::Wednesday:
        return "Wednesday";
    case enDays::Thursday:
        return "Thursday";
    case enDays::Friday:
        return "Friday";
    
    default:
        return "Wrong number";
    }
}

void printDayOfTheWeek(int day){
    cout<<"The day is: "<<getDay(day)<<endl;
}

int main(){

	printDayOfTheWeek(readNumberOfDay());
	
	return 0;
}
