// MD MUSTAFIZUR RAHMAN


// date is valid or not
#include <iostream>
using namespace std;

int main() 
{
   // DD MM YY ===Format
//    int day=30, month=02, year=2001;
   int day, month, year;

   cin>>day;
   cin>>month;
   cin>>year;

   if(year >=1800 && year <=8000)
  {
      if(month >=1 && month<=12)
    {

         if((day>=1 && day<=31) &&(month==1 || month==3 || month==5|| month==7||month==8|| month==10|| month==12))
              {
               cout<<"Date Valid";
              }

        else if((day>=1 && day<=30)&& (month==4 || month==6 || month==9 || month==11) )
              {
               cout<<"Date Valid";
              }

        else if((day>=1 && day<=28) && (month==2))
             {
              cout<<"Date Valid";
             }

        else if (day==29 && month==2 && (year%400==0 ||(year%4==0 && year%100 !=0)))
             {
              cout<<"Date Valid";
             }
    else{
         cout<<"Invalid Day";
        }




    }

    else
    {
        cout<<"Invalid Month";
    }

   }
   
else
{
cout<<"Invalid Year";
}


   
    return 0;
}