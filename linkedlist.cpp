#include<iostream>
 using namespace std;

  class node{
    public:

    int data;
    node*next;

     node(int t){
      cout<<"constructor is called";
       data =t;
       next=nullptr;

     }
   // member function 
      int get(){
        return data;
      }
  };

  int main(){
    
     node *s=new node(3); // creation of object and allocating memory in the heap then returning addres of that blocks
     
      cout<<s->get();

  
     
    return 0;
  }

