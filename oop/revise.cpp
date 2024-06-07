#include<iostream>
#include<string.h>
 using namespace std;
 
 class hero{
   public:
   int health;
 };

 int main(){
   // object creation 
   hero h1;
   h1.health=34;
   cout<<h1.health;
 }