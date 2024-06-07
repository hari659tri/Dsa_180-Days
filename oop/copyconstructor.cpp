#include<iostream>
using namespace std;
 
 class hero{
    public:
    char ch;
    int ag;
      hero();
      hero(int ag,char ch){
      this->ag=ag;
      this->ch=ch;
      }

      void print(){
        cout<<this->ch<<" "<<this->ag<<" "<<endl;
      }
 };
int main(){
 // object creation and constructor invoked 
 hero r(45,'g');
 r.print();
 // copying the constructor
 hero s; // Remove the parentheses after 'hero s'
 
 s.print();

}
