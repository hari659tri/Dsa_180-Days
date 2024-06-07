#include<iostream>
#include<vector>
using namespace std;

// never ever temper the head  head always fixed to first node alwsys try to take an a temp pointer....
  class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data=data;
        next=nullptr;
    }
    
     node(int data,node *next){
        this->data=data;
        this->next=next;
     }
  
 };

 node *arrll(vector<int>&arr){
    node *head=new node(arr[0]);
    node*mover=head;
    node*temp;
     for(int i=1;i<arr.size();i++){
       temp=new node(arr[i]);
       mover->next=temp;
       mover=temp;
     }
     
     return head;
  }

  // search in the linked list 

  bool search(node*head,int data){
      node *temp=head;
      while(temp){
        if(temp->data==data){
            return true;
        }
        temp=temp->next;
      }
      return false;
  }

  // travesal 
   /// traversing each node exactly once's
  void travers(node *head){
     node*temp=head;
     while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     cout<<endl;
  }

   // length of the LL..
   
   int lenght(node*head){
    node*temp=head;
    int cnt=0;
    while(temp){
        temp=temp->next;
        cnt++;
     }

  return cnt;
   } 
 

 

   
 int main(){
    vector<int>arr{2,5,8,7};
     node *head=arrll(arr);
     travers(head);
     cout<<"prsent if 1 else not prsent "<< search(head,8)<<endl;
     int LL=lenght(head);
      cout<<LL<<endl;
  
   
     
    cout<<endl;

 }




