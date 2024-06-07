#include<iostream>
using namespace std;

 int main(){
   
    int *p=new int(23); // you can allocate the value during the memory allocation
    cout<<p<<endl;
    cout<<*p;

    return 0;
 }