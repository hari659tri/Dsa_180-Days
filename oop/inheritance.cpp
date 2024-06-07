#include<iostream>
using namespace std;
 

 // inheritance of the oops in c++..
  class animal{
   public:
   int age=45;
   int weight;
   void eat(){
    cout<<"Eating"<<endl;
   }
  }; 

class child:private animal{
   // all properties of the animal comes into the child
   public:
   void eat(){
    cout<<this->age<<endl;
    cout<<this->weight;
   }
    
    
};
int main(){
  child d;
  d.eat();

}
