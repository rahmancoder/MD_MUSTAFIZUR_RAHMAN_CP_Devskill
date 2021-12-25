// MD MUSTAFIZUR RAHMAN

// calculator of basic sum, sub, mul, div with operator

#include <iostream>
using namespace std;

int main() 
{
   char operator;

   double number1, number2;
   cin>>operator;
   cin>number1;
   cin>>number2;

   switch (operator)
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
       cout<<"operator incorrect";






   }


   return 0;

}