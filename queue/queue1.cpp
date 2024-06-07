#include<iostream>
#include<queue>
using namespace std;

 int main(){
   // creation 
  queue<int>q;
  // insertion
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);
  q.push(8);
  q.pop();
   //size accesing
    cout<<"size of the queue will be "<<q.size()<<endl;
    // back element 
    cout<<"back element of the queue will be"<<q.back()<<endl;
  // printing
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
  }
  cout<<endl;
  //.....empty
  cout<<q.empty()<<endl;
  if(q.empty()){
    cout<<"queue is  empty"<<endl;
  }
  else{
    cout<<"queue is not empty"<<endl;
  }


 }