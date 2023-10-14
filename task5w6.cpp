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