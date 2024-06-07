#include<iostream>
using namespace std;
 
 class a{
    // code
    public:
    int chemistry;
    a(){
        chemistry=4004;
    }
 };

 class b{
   //code
   public:
   int chemistry;
   b(){
    chemistry=900;
   }
 };

 class c:public a,public b{
  public:
  int bio;
  c(){
    bio=300;
  }
 };
 int main(){
  c l;
 cout<<l.bio<<" "<<" "<<l.b::chemistry<<endl;
 }