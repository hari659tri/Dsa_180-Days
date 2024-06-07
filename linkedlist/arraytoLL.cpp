#include<iostream>
#include<vector>
using namespace std;

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

  node*deletekthnode(node*head,int k){
      
      if(head==nullptr)
      return head;

      if(k==1){
         node*temp=head;
         head=head->next;
         delete temp;
      }

     node*prev=head;
     node*temp=head->next;
     int cnt=1;
      while(temp!=nullptr){
         cnt++;

         if(k==cnt){
            prev->next==temp->next;
            temp->next=nullptr;
            delete temp;
            break;
         }
        temp=temp->next;

    
      }
   
    return head;


  }



 int main(){
    vector<int>arr{2,5,8,7};
   //  node *head=new node(arr[0]);
   /// cout<<head->data<<endl;
    //cout<<head->next;
   node *head= arrll(arr);
   head= deletekthnode(head,3);

 }