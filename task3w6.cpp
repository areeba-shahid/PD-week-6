#include<iostream>
using namespace std;
string findZodiacSign(int day , string month){
if((day >= 21 && month == "March") || (day <= 19 && month == "April")){
return "Aries";}
if((day >= 20 && month == "April") || (day <= 20 && month == "May")){
return "Taurus";}
if((day >= 21 && month == "May") || (day <= 20 && month == "June")){
return "Gemini";}
if((day >= 21 && month == "June") || (day <= 22 && month == "July")){
return "Cancer";}
if((day >= 23 && month == "July") || (day <= 22 && month == "August")){
return "Leo";}
if((day >= 23 && month == "August") || (day <= 22 && month == "September")){
return "Virgo";}
if((day >= 23 && month == "September") || (day <= 22 && month == "October")){
return "Libra";}
if((day >= 23 && month == "October") || (day <= 21 && month == "November")){
return "Scorpio";}
if((day >= 22 && month == "November") || (day <= 21 && month == "December")){
return "Sagittarius";}
if((day >= 22 && month == "December") || (day <= 19 && month == "January")){
return "Capricorn";}
if((day >= 20 && month == "January") || (day <= 18 && month == "February")){
return "Aquarius";}
if((day >= 19 && month == "February") || (day <= 20 && month == "March")){
return "Pisces";}
}
main(){
int day;
string month;
cout<<"Enter the day of birth: ";
cin>>day;
cout<<"Enter the month of birth (e.g., January, February): ";
cin>>month;
cout<<"Zodiac Sign: "<< findZodiacSign(day,month);
}