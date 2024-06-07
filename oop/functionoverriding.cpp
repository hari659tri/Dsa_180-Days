#include<iostream>
using namespace std;
  
   class area{
   public:
   void geta(){
    cout<<"get any shape of area by simply doing a a*a";
   }
   };
   
    class circle:public  area{
       public:
       // this is called a function/method overriding....
    void geta(){
      cout<<"area of circle is pi*r*r";
   }
       
    
    };
 int main(){

   area d;
   d.geta();


 }