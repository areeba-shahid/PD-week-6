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