#include<iostream>
#include<stack>
using namespace std;

 // insert at bottom is a program in which we insert top most element of stack into the bottom 
 void insertbottom(stack<int>&s,int target){

    // base case
    if(s.size()==0){
       s.push(target);
       return;
    }  

    int temp=s.top();
    s.pop();
    // recursive call 
    insertbottom(s,target);
     
     // back track again...
     s.push(temp);
     }
 int main(){
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  st.push(6);
 int target=st.top();
 st.pop();
  insertbottom(st,target);

  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }



 }