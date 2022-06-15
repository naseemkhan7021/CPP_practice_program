#include<iostream>
#include<vector>

int main(){
     std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
     double ev=0;double odd=0;
     for (int i = 0; i < numbers.size(); i++)
     {
          if(numbers[i]%2 == 0){
               ev+=numbers[i];
          }else{
               odd+=numbers[i];
          }
     }

     std::cout<<"Sum of even numbers is " <<ev<<"\n";
     std::cout<<"Product of odd numbers is " <<ev<<"\n";
     
}