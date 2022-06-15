#include".h++"
void checkLeapYear(int year){
     if (year%4 == 0 && year%100 != 0 || year%400 == 0)
     {
          cout<<year<<" is a leap year.\n";
     }else{
          cout<<year<<" is not a leap year.\n";
     }
     
}