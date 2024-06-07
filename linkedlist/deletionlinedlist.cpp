 #include<iostream>
 #include<bits/stdc++.h>
  using namespace std;
 
  class node{
    public:
    int val;
    node*next;
    node*back;
    node(int val){
        this->val=val;
        next=nullptr;
    }

   node(int val,node*next,node*back){
       
       this->val=val;
       this->next=next;
       this->back=back;

   }


  };
    
    node*arrll(vector<int>&arr){
       node*head=new node(arr[0]);
       node*temp=head;

       for(int i=1;i<arr.size();i++){
          node*newnode=new node(arr[i]);
          temp->next=newnode;
          temp=newnode;
       }
    return head;
    }

    void traverse(node*head){
      node*temp=head;
      while(temp!=NULL){
      cout<<temp->val<<" ";
      temp=temp->next;
      }
    }


    node* deletehead(node*head){
      node*temp=head;
       
       head=head->next;
       free(temp);

   
    return head;
      
    }
    node*deletelast(node*head){
      node*temp=head;
       if(head==NULL)
       return head;
       
       if(head->next==NULL){
         delete head;
         return nullptr;
       }

       while(temp->next->next!=nullptr){
         temp=temp->next;
       }
       
        delete temp->next;
        temp->next=nullptr;

        return head;
    }

      node*deletekthnode(node*head,int k){
      
      if(head==nullptr)
      return head;

      if(k==1){
         node*temp=head;
         head=head->next;
         delete temp;
         return head;
      }
     
     node*prev=head;
     node*temp=head->next;
     int cnt=1;
      while(temp!=nullptr){
         cnt++;

         if(k==cnt){
            prev->next=temp->next;
            temp->next=nullptr;
            delete temp;
            break;
         }
         prev=temp;
        temp=temp->next;

    
      }
   
    return head;
  }


  // insertion of the node in the linked list 
  //1.->inserting a node before a head node....

  node*insertbeforehead(node*head,int val){

    node*newnode= new node(val,head,nullptr);
     
     head=newnode;

     return head;
   
  }
 
   node* insertbeforetail(node*head,int val){
   
     node*temp=head;
     node*newnode=new node(val);
     node*front=nullptr;

    while(temp->next->next!=nullptr){

      temp=temp->next;
    }
     // befor last node ahead stayed
     front=temp->next; 
     newnode->next=temp->next;
     temp->next=newnode;
      newnode->back=temp;
      front->back=newnode;
     
     return head;


   }
    
  // insert node before a given position 

  node*insertbeforepos(node*head,int val,int k){
      
   //  edge cases  
   node*newnode=new node(val);
   if(head==nullptr)
   return head;
    
   if(k==1){
     node*newnode= new node(val,head,nullptr);
     head=newnode;
     return head;
   }
 
   int cnt=1;
   node*prev=head;
   node*temp=head->next;
    
    while(temp!=nullptr){
    
      cnt++;

      if(cnt==k){
      newnode->next=temp;
      temp->back=newnode;
      newnode->back=prev;
      prev->next=newnode;
      }
      prev=temp;
      temp=temp->next;
    }

   return head;

  }





 int main(){
   
  vector<int>arr{2,5,8,7};
  node*head= arrll(arr);
 // head= deletehead(head);
   // delete last node of a linked list 
  //  head=deletelast(head);
    //head= deletekthnode(head,3);
      // deletekthnode of an a linked list....
    //head=insertbeforehead(head,9);
   /// insert node before the tail node 
   ///head=insertbeforetail(head,9);
       head=insertbeforepos(head,9,3);
       traverse(head);
   

 }