#include<iostream> 
#include<stack>
using namespace std;
       /// this is the wrong  approach you copy multiple time the same value of stack 
//     void reverstack(stack<int>&s,stack<int>&st){
      
//       // base case 
//        if(s.empty()){
//         while(!st.empty()){
//             s.push(st.top());
//             st.pop();
//         }
//         return;
//        }

//      st.push(s.top());
//      s.pop();
//      reverstack(s,st);
   

//     }

//   int main(){
//    
//     stack stack<int>s;<int>st; // making empty stack to store the element of s ;
     
//      s.push(1);
//      s.push(2);
//      s.push(3);
//      s.push(4);
//      s.push(5);
//      s.push(6);
//      reverstack(s,st);

//      while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//      }
     
//   } 


// brute force approach to reverse a stack using the or taking an extra space 

  void insertbottom(stack<int>&s,int target){
 // base case....
   if(s.empty()){
    s.push(target);
    return;
   }
   
   // empty not stack
   int temp=s.top();
   s.pop();
   insertbottom(s,target);

   // back track...
   s.push(temp);
 
  }

 
 void reversestack( stack<int>&s){
    // base case

     if(s.empty())
     return;

     // kuch krna hai

     int target=s.top();
     s.pop();
     // recrsive call 
     reversestack(s);

     // insert at bottom 
     insertbottom(s,target);

 }
int main(){
    stack<int>s;
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);
     s.push(5);
     s.push(6);
     reversestack(s);

     while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
     }

}