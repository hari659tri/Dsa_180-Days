#include<iostream>
using namespace std;
  // recursion without a base condition  then you get segmentation fault means stack over flow
 // show base condition is a mandatory 
 void fun(){
    cout<<"GFG"<<endl;
    fun();
 }

int main(){
  
  fun();
    return 0;
}