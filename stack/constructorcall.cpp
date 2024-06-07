#include<iostream>
using namespace std;
 
class Construct{
      public:
      int x;
      int y;
      
  Construct(){
    cout<<"i am a default constructor";
  }
  Construct(int x,int y){
    cout<<"i am not a default constructor";
    this->x=x;
    this->y=y;
  }
   void set(int a,int b){
    x=a;
    y=b;
   }
   int get(){
     return x*y;
   }

};
 int main(){
 
  Construct obj(5,6);
   
   obj.set(3,4);
   cout<<obj.get();




 }