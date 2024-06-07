#include<iostream>
using namespace std;
  // recursion plandrome n 
  // ek case solve rest recursion handle it 
  void plan(string st,int s,int e){

     if(s>=e){
        cout<<"it is a plandrome";
        return;
     }
     if(st[s]==st[e]){
        plan(st,s+1,e-1);
     }
     else{
        cout<<"it is not a plandrome ";
        return;
     }
    
  }
 // time complexity is O(n) auxilary space is O(n)
 int main(){
  string st="bookkoob";
  plan(st,0,st.size()-1);

 }





  