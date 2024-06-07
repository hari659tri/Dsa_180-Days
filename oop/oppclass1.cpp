#include<iostream>
using namespace std;

 class animal{
   // memeber variable
   public:
     int age;
     string name;
     int weight;
      animal(int a,string n){
      age=a;
      name=n;
      }
    //  animal(animal&obj){

    //  }
    ~animal(){
        cout<<"i am inside the destructor";
    }
 };

 int main(){

    // object creation 

    // static ways
    animal r(5,"kutti");
    animal s(r); // copying the constructor this is important....
    cout<<s.name;
    cout<<s.age;

    

 }