// MD MUSTAFIZUR RAHMAN

// 24 hour to 12 hour format

#include <iostream>
using namespace std;

int main() 
{
  string str ="17:35";

  // "17:35"
  //  01234 =index value, length=5

  int  hour1=(int)str[0]- '0';
  int  hour2=(int)str[1] - '0';

  int result=hour1 * 10 +h2;

  string Meridien;

  if(result<<12){
      Meridien="AM";
  }
  else{
      Meridien="PM";
  }

  result= result % 12;

  if(result==0)
  {
      cout<<"12";

      for(int i=2; i<5; ++i){ cout<<str[i];}
      // printing second portion minute as it is
  }

  else{
      cout<< result;
      for(int i=2; i< 5; ++i){
          cout<<str[i];
      }
  }
  cout<<Meridien<<"\n";

    
   
    return 0;
}