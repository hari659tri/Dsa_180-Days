#include<iostream>
using namespace std;
  
  class a{
  
  public:

   int sum(int a,int b){
      return a+b;
   }
   int sum(int a,int b,int c){
      return a+b+c;
   }
   int sum(int a,float b){
      return a+b;
   }
  };

 int main(){
  
  a k;

   cout<<k.sum(4,10.0f);

    return 0;
 }