// MD MUSTAFIZUR RAHMAN


// find the set bit of two numbers, how many set bit matched

#include <iostream>
using namespace std;

int main() 
{
   

   int number1, number2;
   int count=0;
   cin>>number1;
   cin>>number2;


   for(int i=0; i<32;i++){
       if(((number1 >> i)& 1) ==(number2 >> i) & 1)
       {
           count++;
       }
   }
   cout<<"common bits:"<<count;


   return 0;
}