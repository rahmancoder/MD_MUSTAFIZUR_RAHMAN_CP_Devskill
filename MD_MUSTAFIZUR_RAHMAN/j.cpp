// MD MUSTAFIZUR RAHMAN

// calculator of basic sum, sub, mul, div with operator

#include <iostream>
using namespace std;

int main() 
{
    
//    char operation='+';
//    double number1=5.5, number2=11.1; 
   char operation;

   double number1, number2;
   cin>>operation;
   cin>>number1;
   cin>>number2;

   switch (operation)
   { 
       case '+':
       cout<<number1+number2;
       break;

       case '-':
       cout<<number1-number2;
       break;

       case '*':
       cout<<number1*number2;
       break;

       case '/':
       cout<<number1/number2;
       break;

       default:
       cout<<"operation incorrect";






   }


   return 0;

}