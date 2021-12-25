// MD MUSTAFIZUR RAHMAN


//divisible by 5 but not by 7

#include <iostream>
using namespace std;

int main() 
{
  // int number=15;
  // int number=5;
  int number;

  cin>>number;

  if(number % 5==0 && number %7 !=0)
  {
    cout<<"yes";
  }
  else
  {
    cout<<"No";
   }

    
   
    return 0;
}