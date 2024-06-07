#include<iostream>
#include<string>
using namespace std;

  class car{
 public:
 string name="90speed";
 int age;
 int weight;
 void speedup(){
    cout<<"sppedup karo gadi ko fast";
 }

  };

 // drived class/ child class....
 class scorpio:public car{
   

 };
 int main(){
  scorpio babarwali;
  babarwali.speedup();
  cout<<babarwali.name;
 }