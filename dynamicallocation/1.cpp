#include<iostream>
using namespace std;

 
 int main(){

     int *p=new int; // this will allocated 4 byte memory for the p variable 
    //  cout<<p<<endl;
    //  *p=10;
    //  cout<<*p<<endl;
     
     {
        int *q=new int(10);
         delete q; // free the memory that will be assigned 
          cout<<q;
     }
    
 }