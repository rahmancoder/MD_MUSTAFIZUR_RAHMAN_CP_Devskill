// MD MUSTAFIZUR RAHMAN

// Grade calculation or MArks calculations
#include <iostream>
using namespace std;

int  main() 
{
 
//  int marks=102;
//  int marks=-6;
 int marks;
 cin>>marks;

 if(marks<0 || marks > 100)
 {
     cout<<"invalid marks";
 }
 else if(marks >= 0 && marks <= 34)
 {
     cout<<"F";
 }
  else if(marks >= 35 && marks <= 39)
 {
     cout<<"D";
 }
  else if(marks >= 40 && marks <= 49)
 {
     cout<<"C";
 }
 else if(marks >= 50 && marks <= 59)
 {
     cout<<"B-";
 }
  else if(marks >= 60 && marks <= 59)
 {
     cout<<"B+";
 }
  else if(marks >= 70 && marks <= 79)
 {
     cout<<"A-";
 }
  else if(marks >= 80 && marks <= 89)
 {
     cout<<"A";
 }
else
cout<<"A+";




       return 0;
}