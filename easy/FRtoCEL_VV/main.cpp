// import files
#include".h"
#include".cpp"

// main function
int main(){
     int user_input_f_or_c;
     double user_input_value;

     string repeat = "y";
     while(repeat=="y")
     {
          // user input
          cout<<"what you want type 1(f->c) or 2(c->f) => ";
          cin>>user_input_f_or_c;
          cout<<"\n";

          // check condition
          switch (user_input_f_or_c)
          {
          case 1: // f to c
               cout<<"inter Fahrenheit value => ";
               cin>>user_input_value;
               cout<<"\n";
               cout<<user_input_value<<"F "<<"=> "<<Fr_to_Cel(user_input_value)<<"C\n";
               cout<<"Do you want to continue? y or n => ";
               cin>>repeat;
               break;
          
          case 2: // c to f
               cout<<"inter Celsius value => ";
               cin>>user_input_value;
               cout<<"\n";
               cout<<user_input_value<<"C "<<"=> "<<Cel_to_Fr(user_input_value)<<"F\n";
               cout<<"Do you want to continue? y or n => ";
               cin>>repeat;
               break;
          
          default:
               cout<<"Please type only 1 or 2\n";
               break;
          }
     }
     cout<<"We meet next time ... bay!";
     
}