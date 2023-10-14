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


