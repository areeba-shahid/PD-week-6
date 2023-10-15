\\\\\task1\\\\
#include<iostream>
using namespace std;
string decideActivity(string temp, string humidity){
if(temp == "warm"&& humidity == "dry"){
    return "Play tennis";}
if(temp == "warm" && humidity == "humid"){
return "Swim";}
if(temp== "cold" && humidity == "dry"){
return "Play basketball" ;}
if(humidity == "humid" &&temp== "cold" ){
return "Watch TV";}

}

main(){
    string temp;
    string humidity;
cout<<"Enter temperature (warm or cold): ";
cin>>temp;
cout<<"Enter humidity (dry or humid): ";
cin>>humidity;
cout<<"Recommended activity: "<<decideActivity(temp,humidity)<<endl;

}

\\\\\\task 2\\\\\


#include<iostream>
using namespace std;
float average;
float calculateAverage(float english, float maths, float chem , float ss , float bio){
float average1 = english + maths + chem + ss + bio;
float perc = average1 / 500;
 average = perc * 100;
return average;

}
string calculateGrade(float average){
    
       if(40 <= average && average < 50){
              return "D";}
    
 if(50 <= average && average < 60){
              return "C";}
 if(60 <= average && average < 70){
              return "B";}
 if(70 <= average && average < 80){
              return "B+";}
 if( 80 <= average && average < 90){
              return "A";}
  if(90 <= average   && average < 100){
              return "A+";}
          if(average < 40){
return "F";}
}

main(){
float english;
 float maths;
 float chem ;
 float ss ;
 float bio;
string name;

cout<<"Enter student name: ";
cin>>name;
cout<<"Enter marks for English: ";
cin>>english;
cout<<"Enter marks for Maths: ";
cin>>maths;
cout<<"Enter marks for Chemistry: ";
cin>>chem;
cout<<"Enter marks for Social Science: ";
cin>>ss;
cout<<"Enter marks for Biology: ";
cin>>bio;
cout<<"Student Name: "<<name<<endl;
cout<<"Percentage: "<<calculateAverage(english,maths,chem,ss,bio)<<"%" <<endl;
cout<<"Grade: "<<calculateGrade(average)<<endl;
}



t\\\\\\task 3\\\\

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




\\\\\\\\\\\task 4\\\\\\\\\\\\\\\\\\



#include<iostream>
using namespace std;
float amount(char type ,char time, int minutes){
float price;
if((type == 'r'||type =='R') && minutes <= 50){
price = 10;
return price;}
int min1 = minutes - 50;
if((type == 'r'||type =='R') && minutes > 50){
price = 10 + (min1 * 0.20);
return price;}
if((type == 'p'||'P') && minutes <= 75 && (time =='d'||time =='D')){
price = 25 ;
return price;}
if((type == 'p'||'P') && minutes <= 100 && (time =='n'||time =='N')){
price = 25 ;
return price;}
int min2 = minutes - 75;
if((type == 'p'||'P') && minutes > 75 && (time =='d'||time =='D')){
price = 25 + (min2 * 0.10) ;
return price;}
int min3 = minutes - 100;
if((type == 'p'||'P') && minutes > 100 && (time =='n'||time =='N')){
price = 25 + (min3 * 0.05) ;
return price;}
}
string serviceType(char type){
if (type == 'p'||type == 'P'){
return "Premium";}
if(type == 'r' || type == 'R'){
return "Regular";}
}
main(){
char type;
int minutes;
char time;
cout<<"Enter the service code (R/r for regular, P/p for premium): ";
cin>>type;

if(type != 'r' && type!= 'R' && type != 'p' && type != 'P'){
cout<< "error"<<endl;}


  if(type == 'p' || type =='P'){
cout<<"Enter time of the call (D/d for day, N/n for night): ";
cin>>time;
cout<<"Enter the number of minutes used: ";
cin>>minutes;
cout<<"Service Type: "<<serviceType(type)<<endl;
cout<<"Total Minutes Used: " <<minutes<< " minutes"<<endl;
cout<<"Amount Due: "<<"$"<<amount(type,time,minutes)<<endl;
}

 if(type == 'r' ||type =='R'){ 
cout<<"Enter the number of minutes used: ";
cin>>minutes;
cout<<"Service Type: "<<serviceType(type)<<endl;
cout<<"Total Minutes Used: " <<minutes<< " minutes"<<endl;
cout<<"Amount Due: "<<"$"<<amount(type,time,minutes)<<endl;
}
}



\\\\\\\\\\\\task 5\\\\\\\\\\\\\\


#include<iostream>
using namespace std;
 float calculateFruitPrice(string fruit, string day, double quantity){
float price;
if(day == "Monday" || day =="Tuesday" || day == "Wednesday" ||day == "Thursday" ||day == "Friday"){
if( fruit == "banana"){
price = 2.50 * quantity;
return price;}
if( fruit == "apple"){
price = 1.20 * quantity;
return price;}
if( fruit == "orange"){
price = 0.85 * quantity;
return price;}
if( fruit == "grapefruit"){
price = 1.45 * quantity;
return price;}
if( fruit == "kiwi"){
price = 2.70 * quantity;
return price;}
if( fruit == "pineapple"){
price = 5.50 * quantity;
return price;}
if( fruit == "grapes"){
price = 3.85 * quantity;
return price;}
}

if(day == "Saturday"|| day == "Sunday"){
if( fruit == "banana"){
price = 2.70 * quantity;
return price;}
if( fruit == "apple"){
price = 1.25 * quantity;
return price;}
if( fruit == "orange"){
price = 0.90 * quantity;
return price;}
if( fruit == "grapefruit"){
price =1.60  * quantity;
return price;}
if( fruit == "kiwi"){
price = 3.00 * quantity;
return price;}
if( fruit == "pineapple"){
price = 5.60 * quantity;
return price;}
if( fruit == "grapes"){
price = 4.20 * quantity;
return price;}
}
}

main(){
string fruit;
 string day;
 double quantity;

cout<<"Enter the fruit(banana/apple/...): ";
cin>>fruit;

cout<<"Enter day of purchase(Monday/Tuesday/...): ";
cin>>day;
if((day != "Monday" && day != "Tuesday" && day != "Wednesday" && day != "Thursday" && day != "Friday" && day != "Saturday" && day != "Sunday") || (fruit != "apple" && fruit != "orange" && fruit != "banana" && fruit != "grapefruit" && fruit != "kiwi" && fruit !="pineapple" && fruit != "grapes")){

cout<<"error"<<endl;}
else{
cout<<"Enter quantity of fruit(a decimal number): ";
cin>>quantity;
cout<<"Total Price: "<<calculateFruitPrice(fruit , day , quantity);}
}




\\\\\\\\\\\task 6\\\\\\\\\\\\\



#include<iostream>
using namespace std;
double  calculateStudioPrice(string month, int days){
double price ;
if(month == "June" && days <= 14){
return  days * 75.20;}
if(month =="July" || month =="August"){
 return  days * 76;} 

if((month == "May" || month == "October") && (days > 7 && days <=14)){
 price = 50 - ( 50 * 0.05);
return price *days;}

if((month == "May" || month == "October") && days > 14){
 price = 50 - ( 50 * 0.30);
return price *days;}

if((month == "June" || month == "September") && days > 14){
 price = 75.20 - ( 75.20 * 0.20);
return price *days;}
}
double calculateApartmentPrice(string month , int days){
double price  ;
if(days <= 14 && month =="June"){
return 68.70 * days;}

if(days > 14){
if(month == "May"|| month == "October"){
price = 65 - (65 * 0.10);
return price * days;}

if(month == "June"|| month == "September"){
price = 68.70 - (68.70 * 0.10);
return price * days;}

if(month == "July"|| month == "August"){
price = 77- ( 77 * 0.10);
return price * days;}
}
}
main(){
string month;
int days;
double price;

cout<<"Enter the month (May, June, July, August, September, October): ";
cin>>month;
cout<<"Enter the number of stays: ";
cin>>days;
cout<<"Apartment: "<< calculateApartmentPrice(month , days)<<"$"<<endl;
cout<<"Studio: "<< calculateStudioPrice(month , days)<<"$"<<endl;
}






\\\\\\\\\task 7\\\\\\\\\\\\\\

#include<iostream>
using namespace std;
string timeCalculate(int examHours, int examMins , int studentMins , int studentHours){
int examTime = (examHours* 60) + examMins;
int studentTime = (studentHours * 60) + studentMins;
int time1 = studentTime - examTime;
int time2 = examTime - studentTime;
if(studentTime > examTime){
cout<<"Late"<<endl;}
if(time1 >= 60){
cout<< time1/60 <<":" << time1 % 60 <<" hours after the start"<<endl;}
else cout<< time1 << " minutes after the start"<<endl;
if(studentTime == examTime || examTime - studentTime <= 30){
cout<<"On time"<<endl;}
else cout <<"Early"<<endl;
if(time2 >= 60){
cout<< time2 /60 <<":"<< time2 % 60<<" hours before the start"<<endl;}
else cout<< time2 <<" minutes before the start";
}

main(){
int examHours;
 int examMins ;
 int studentMins ;
 int studentHours;
cout<<"Exam Starting Time (hour): ";
cin>>examHours;
cout<<"Exam Starting Time (minutes): ";
cin>>examMins;
cout<<"Student hour of arrival: ";
cin>>studentHours;
cout<<"Student minutes of arrival: ";
cin>>studentMins;
cout<<timeCalculate(examHours,  examMins ,  studentMins ,  studentHours)<<endl;
}









\\\\\\\\\\\task 8\\\\\\\\\\\\\\
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








\\\\\\\\\\\task 9\\\\\\\\\\\\\\

#include<iostream>
using namespace std;
string checkPosition(int h, int x, int y){
if(x < 0 || x > 3*h || y < 0 || y > 4*h || (x==0 && y > h)||(x== 3*h && y > h)||(x < h && y > h)||(x > 2*h && y > h)){
return "Outside";}
if((x == 0 || y== 0)|| (x == h && y == h) || (x==h && h < y < 4*h)||(x == 2*h && h <= y <= 4*h)||(x== 3*h && y <= h)){
return "Border";}
else 
{return "Inside";}

}


main(){
int h;
 int x;
 int y;
cout<<"Enter height: ";
cin>>h;
cout<<"Enter x coordinate: ";
cin>>x;
cout<<"Enter y coordinate: ";
cin>>y;
cout<<checkPosition(h , x , y);
}


\\\\\end\\\\\\\\\