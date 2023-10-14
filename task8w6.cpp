#include<iostream>
#include<cmath>
using namespace std;
int calculate(string year, float holidays, float weekendsHometown){
float holiday = holidays * 0.66;
float times = 48 + holiday + weekendsHometown ;
if(year == "normal"){
return times * 0.75 ;}
float timeLeap = times - ( times * 0.15);
if(year == "leap"){
return timeLeap;}
}


main(){
string year;
 float holidays;
 float weekendsHometown;
cout<<"Enter year type: ";
cin>>year;
cout<<"Enter number of holidays: ";
cin>>holidays;
cout<<"Enter number of weekends: ";
cin>>weekendsHometown;
int result = calculate(year,holidays,weekendsHometown);
cout << result << endl;
}