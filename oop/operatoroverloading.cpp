#include<iostream>
using namespace std;

 // we overload + operator here 

 class a{
    public:
    int age;
   
    void eat(){
        cout<<"Do you eated lunch till now or not eated";
    }
    void operator+(a&o2){
     cout<<this->age-o2.age;
    }
 };

 int main(){
  a o1,o2;
  o1.age=10;
  o2.age=20;
  o1+o2; // me do subtract by the addition   here o1 work as a current object and o2 is work as input parameter and +, work as a funtion call it is automatically called  you also understand it by simply o1.add(o2); o1 is current object's....
 }