#include<iostream>
using namespace std;
 // implementation of stack using array 
// but we solve the problem by help stl stack already implemented in the stack 
  class stack{
   private:
   int*arr;
   int size;
   int top;
   public:
   stack(int size){
    arr=new int[size];
    this->size=size;
    top=-1;
   }
// push
  void push(int data){
    if(size-top>1){
    top=top+1;
    arr[top]=data;
    }
    else{
      cout<<"stack overflow"<<endl;
    }
   
  }
  // pop
  void pop(){
    if(top==-1){
        cout<<"stack underflow";
    }else{
         top=top-1;
    }
  
  }

  //peeke element 
   int peek(){
    if(top==-1){
        cout<<"no element in the stack ";
    }
    else{
    return arr[top];
    }
   }
  // size
   int Size(){
    if(top==-1){
        return 0;
    }
    else{
     return top+1;
    } 
    
   }

   //empty
    int empty(){

        if(top==-1){
            return 1;
        }
        else{
            return 0;
        }
    }


  };

 int main(){
   // creation 
   stack obj(5);
   //insertion of element....
   for(int i=0;i<5;i++)
   obj.push(i);
   // printing element in the stack then pop it....
   while(!obj.empty()){
    cout<<obj.peek()<<" ";
    obj.pop();
   }
   cout<<endl;
   cout<<obj.Size();
   
 }

