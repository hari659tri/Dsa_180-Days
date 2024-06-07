#include<iostream>
#include<stack>
using namespace std;

 void insertsorted(stack<int>&s,int &target){

    // base case 
     if(s.empty()){
        s.push(target);
      return;
     }

     if(s.top()>=target){
        s.push(target);
        return ;
     }
     
     int temp=s.top();
     s.pop();
     insertsorted(s,target);
     s.push(temp);

 }
  
  void sort(stack<int>&s){
    // base case.....
    if(s.empty()){
        return;
    }
  
   
  int temp=s.top();
  s.pop();
  sort(s);

   insertsorted(s,temp);


  }





 int main(){

  stack<int> st;
   
   st.push(7);
   st.push(11);
   st.push(3);
   st.push(5);
   st.push(9);

    sort(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
 }


 