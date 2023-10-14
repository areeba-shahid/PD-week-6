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