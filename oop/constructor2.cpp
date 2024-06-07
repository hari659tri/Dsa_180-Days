#include<iostream> 
using namespace std;

 class fruit{
  int price;
  string vitamin,name;
  public:
  fruit(){
    cout<<"Default_Constructor Will be created";
  }
  fruit( string name,string vitamin,int price){
    this->name=name;
    this->vitamin=vitamin;
    this->price=price;
  }

 void getdata(){
    cout<<"Fruit name will be"<<name<<"you get vitamin after eating it will be vitamin_"<<""<<vitamin<<"price will be"<<price;
 }

 };

 
 int main(){
    fruit mango("mango","A",10000);
    mango.getdata();
 }