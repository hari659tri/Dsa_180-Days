#include<iostream>
using namespace std;

 class a{
  
   public:
   int h;
   a(){
    h=90;
   }

   void up(){
    cout<<"speedup";
   }
 };

 class b:public a{
  public:
 };

 class c :public a{
    public:
 };

 int main(){
   c k;
  cout<<k.h;
  k.up();
 }