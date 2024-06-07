#include<iostream>

using namespace std;
  
  class queue{
   public:
   int front;
   int rear;
   int*arr;
   int size;
   queue(int size){
    arr=new int[size];
    this->size=size;
    rear=0;
    front=0;
   }
  //push 
  void push(int x){
     if(rear==size){
        cout<<"queue is overflow";
     }
     else{
     arr[rear]=x;
    // rear=rear+1;or
    rear++;
    }
  }
  // pop
  void pop(){

    if(rear==front){
      cout<<"queue is underflow";
    }
    else{
    arr[front]=-1;
    front=front+1;
    if(front==rear){ // we do optimization so that memory wasted will be less
        front=0;
        rear=0;
    }
    }
  }
  
   // empty
   int empty(){
    if(front==rear){
        return 1;
    }
    else{
        return 0;
    }
   }

   // size of the queue 
   int Size(){
    return rear-front;
   }
    

  // front element give
   int Front(){
    if(front==rear){
        cout<<"queue is empty";
    }
    else{
    int f=arr[front];
    return f;
    }
   }

  };

 int main(){
   queue q(10);
  // insertion of the element's....
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);
  q.push(8);
  q.push(9);
 cout<<q.Size()<<endl;
 q.pop();
 cout<<q.Front();
cout<<endl;
cout<<q.Size()<<endl;
  
  if(q.empty()){
    cout<<"queue is empty"<<endl;
  }
  else{
    cout<<"queue is not empty";
  }
 }