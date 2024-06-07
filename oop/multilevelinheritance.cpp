#include<iostream>
using namespace std;
class fruit{
  public: 
  int age;
  string name;

  fruit(){
    age=34;
    name="harikesh";
  }
};

class mango:public fruit{
    public:
  string s ="tripathi";
};   

 class alphanzo:public mango{
    public:
 string color="white";
 };

 int main(){
  alphanzo d;
  cout<<d.color<<" "<<d.s<<" "<<d.age<<" "<<d.name
  



 }