#include<iostream>
using namespace std;
  /// a real world expample of OOPs.....
  // it is the real world example that demonastrates the used of oops, and code reusability....

  class smartphone{
   
   int yearof_manufacture;
   string model;
   bool _5g_supported;
    public:
    // work as a both setter and getter 
   void print(int y,string m,bool _5g  ){
      yearof_manufacture=y;
      model=m;
      _5g_supported=_5g;
     cout<<model<<" "<<yearof_manufacture<<" ";
     if(_5g_supported){
        cout<<"and Yes 5g Supported"<<endl;
     }
     else{
        cout<<"and 5g is not supported"<<endl;
     }
   }
  };

 int main(){
    // object creation 
     smartphone iphone,redmi_Note5;
     iphone.print(2024,"iphone 15",true);
     
     redmi_Note5.print(2021,"redmi_Note5",false);
 }