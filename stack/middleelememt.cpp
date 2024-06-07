#include<iostream>
#include<stack>
using namespace std;


//find the middle element of a stack
   
  void findmiddleelement(stack<int>&s,int totalsize){

    // edge case

    if(s.size()==0){
        // stack is empty return -1
      return ;
    }

    // base case
     if((totalsize/2+1)==s.size()){
      cout<<s.top();
      return ;
     }
     
      int temp=s.top();
      s.pop();
      // recursive call 
     
      findmiddleelement(s,totalsize);
     
     // after call end back track push element in the same manner 

     s.push(temp);



  }


 int main(){
  
  stack<int> s;
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);
   s.push(6);
   s.push(7);
   s.push(8);
   s.push(9);

 findmiddleelement(s,s.size());
   
   
   




 }