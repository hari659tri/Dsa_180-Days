 #include<iostream>
 using namespace std;
  
   class Circqueue{

   public:
   int*arr;
   int size;
   int front;
   int rear;
    
    Circqueue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }

    // push 
    void push(int data){
      // full ho
      // single element case handle
      //circular nature handle 
      // default or normal case handle it 
   
     if(front==0&&rear==size-1||rear==front-1){
        cout<<"queue is full";
     }
     else if(front==-1&&rear==-1){
        front=rear=0;
        arr[rear]=data;
     }
     else if(rear==size-1&&front!=0){
        rear=0;
        arr[rear]=data;
     }
     else{
        rear++;
        arr[rear]=data;
     }

    }

   // pop case handle it by own method's you need to take it easy....
    
    void pop(){
     // queue is empty 
     //single elment only present 
     // circular nature handle it 
     // normal way do the as you do 

      if(front==-1&&rear==-1){
        cout<<"queue is empty can't insert a new element";
      }
      else if(front==rear){
        arr[front]=-1;
        front=rear=-1;
      }
      else if(front==size-1){
        arr[front]=-1;
         front=0;
      }
      else{
        arr[front]=-1;
        front++;
      }
      
    }

    int Size(){
        if(rear>front){
            return rear-front+1;
        }
        else{
            return front-rear+1;
        }
    }
     
     bool isempty(){
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
     }
      
     // fornt
     int getfront(){
        //empty
        if(front==-1){
            cout<<"queue is empty";
        }
        else{
            return arr[front];
        }
     }
   
  };

 int main(){
   
   Circqueue q(4);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);
  
    while(!q.isempty()){
        cout<<q.getfront()<<" ";
        q.pop();
    }


 }