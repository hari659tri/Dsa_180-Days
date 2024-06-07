#include<iostream>
#include<vector>
using namespace std;
 
 class node{
   public:
   int data;
   node*next;
   node*back;
   public:

   node(int data){
    this->data=data;
    next=nullptr;
    back=nullptr;
   }
  
   node(int data,node*next,node*back){
    this->data=data;
    this->next=next;
    this->back=back;
   }


 };
    
    node*arrddll(vector<int>&arr){
        node*head=new node(arr[0]);
        node*prev=head;
        for(int i=1;i<arr.size();i++){
          node*temp=new node(arr[i],nullptr,prev);
          prev->next=temp;
          prev=temp;
        }

        return head;
    }
 
   void print(node*head){
    while(head!=nullptr){
     
     cout<<head->data<<" ";
     head=head->next;
    }
   }
  
   // deletion head node 

   node*deletehead(node*head){
     
     if(head==nullptr){
      return head;
     }
     
     //if only single node 
     if(head->next==nullptr&&head->back==nullptr){
      return nullptr;
     }
     node*temp=head;

      head=head->next;
      head->back=nullptr;
      temp->next=nullptr;
      delete temp;

      return head;
   }
    
    // delete tail of a linkedlist
   
    node*tailnodedelete(node*head){
     
      if(head==nullptr){
        return nullptr;
      }
      
      if(head->next==nullptr&&head->back==nullptr){
        return nullptr;
      }
        
      node*prev=head;
      node*temp=head->next;
      
       while(temp->next!=nullptr){
          prev=temp;
          temp=temp->next;
       }
      
      temp->back=nullptr;
      prev->next=nullptr;
       
   
    return head;


    }


   // delete kth node of the linked list
   
    node*deletekthnode(node*head,int k){
     
      if(head==nullptr){
        return nullptr;
    }
    //deleting head node
    if(k==1){
     node*temp=head;
     head=head->next;
     head->back=nullptr;
     temp->next=nullptr;
     delete temp;
     return head;
     }
        int cnt=0;
     node*temp=head;
     while(temp!=nullptr){
        cnt++;
        if(cnt==k)
        break;
        temp=temp->next;
   }

  node*prev=temp->back;
   node*front=temp->next;
   
   if(prev==nullptr&&front==nullptr){
      delete temp;
      return nullptr;
   }
   else if(front==nullptr){
       temp->back=nullptr;
       prev->next=nullptr;
       delete temp;
       return head;
   }
   else{
       prev->next=temp->next;
       front->back=temp->back;
       temp->next=nullptr;
       temp->back=nullptr;
       delete temp;
       return head;
   }
   
   
    }
    
    //  delete a given node in a linked list....
    
     void deletegivennode(node*n){
      node*prev=n->back;
      node*front=n->next;
      // edge case that we have need to manage is the last node if given to me 
     if(front==nullptr){
      prev->next=nullptr;
      n->back=nullptr;
      delete n;
      
     }
     prev->next=n->next;
     front->back=n->back;
     n->back=nullptr;
     n->next=nullptr;
    }


    


   // convert an array to the dobly linked list 
 int main(){
  
   vector<int>arr{4,5,6,8,9};
   node*head= arrddll(arr);
  //   head=deletehead(head);
  //  head=tailnodedelete(head);
   //head=deletekthnode(head,4);
   deletegivennode(head->next->next);
   print(head); ///  you cant delete the head of the linked list...
   

 }