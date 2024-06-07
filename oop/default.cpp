#include<iostream>
using namespace  std;
  

  class fruit{
   public:
    
   string name;
   int price=100;
   
    fruit(){
        cout<<"default constructor";
    }
   
   fruit(string s,int p){
    this->name=s;
    this->price=p;
   }

  };
 

   int main(){
    // fruit m("litchi",800); stack way to used constructor
    // default consteuctor run without ()...
     fruit *m=new fruit("litchi",800);
      cout<<m->price;
      cout<<m->name;  // dynamic way to creat an a object.... 

      // default constructor compiler bhi rakhta when user not define any constructor to initialize the value of the variable 

   }