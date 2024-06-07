#include<iostream>
using namespace std;

class node{
    public:
    int a;
    int b;

    node(int x,int y){
        a=x;
        b=y;
      
    }

     int get(){
        return a*b;
     }
};
 int main(){

    node*ptr=new node(4,5);
     cout<<ptr->get(); // accesing the value of the getter function 
 }