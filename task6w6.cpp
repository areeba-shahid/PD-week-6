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