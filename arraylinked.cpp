// Input: ‘Arr’ = [4, 2, 5, 1]  you  have given an array you need to return the linked list head
// 4-2-5-1
  #include<iostream>
  #include<vector>
  using namespace std;

   class node{
        public:
   int data;
   node*next;
    

    // constructor 
    node(int data){
        this->data=data;
        next=nullptr;
    } 
   };
    //  array to linked list  convsersion
      node*arrayLL(vector<int>&arr){
        node *head=new node(arr[0]);
        node*move=head;
        for(int i=1;i<arr.size();i++){
            node*temp=new node(arr[i]);
            move->next=temp;
            move=temp;
        }


        return head;

      }
      // print of linked list
      void print(node*head){
           node*p=head;
     while (p){  
        cout<<p->data<<" ";
        p=p->next;
      }

      }

        // length of linked list finding
    int length(node*head){
        int cnt=0;
        while(head){
            head=head->next;
            cnt++;
        }
        return cnt;
    }

     // element searching in a linkedlist
    int search(int value,node*head){
      
        while(head){
            if(head->data==value)
            return 1;
            head=head->next;
        }
        return 0;
    }

     // deletion of a node from linked list 
     // first node delition 
     node*deletion(node*head){
             // edge case is 
             if(head==nullptr)
               return head;
               node*temp=head;
               head=head->next;
               delete temp;
               return head;
     }  

     // tail node deletion 
     node*delitiontail(node*head){
        node*temp=head;
        while(temp->next->next!=nullptr){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=nullptr;

        return head;

     }
      //  deletion of kth node if given
       node*deletionk(node*head,int k){
           // edge cases are 
           //1. k value out of range of linked list range then nothing to delete 
           // 2. k value is equal to 1 then do deletion of head node
           // 3. if k value in between then delete that node 
           // 4. if k is equal to length of linked list then delete also 
           // take 4 thing head , prev ,temp,cnt 
           if(head==NULL)
           return head;
           if(k==1){
            node*temp=head;
            head=head->next;
            delete temp;
            return head;
           }
            node*temp=head;
            node*prev=NULL;
            int cnt=0;
            while(temp!=NULL){
               cnt++;
               if(cnt==k){
                prev->next=prev->next->next;
                free(temp);
                break;
               }
             prev=temp;
             temp=temp->next;
            }
 
         return head;
           
       } 
       // deletion of node if value is given 
         
        node* deletionval(node*head,int val){
       
      // edge case one iflinked list is empty 
      if(head==NULL)
      return head;
      // edge case two 
      if(head->data==val){
        node*temp=head;
        head=head->next;
        delete temp;
        return head;
      }
        node*temp=head;
        node*prev=NULL;
        while(temp!=NULL){
            
            if(temp->data==val){
            prev->next=prev->next->next;
            delete temp;
            break;
            }

            prev=temp;
            temp=temp->next;
        }

         return head;
         }
      
     // insertion of a node in linked list
     node*insertbeg(node*head,int val){
        node*newn=new node(val);
        newn->next=head;
        head=newn;
        return head;
     } 
     
      node*insertend(node*head,int val){
        node*newn=new node(val);
        node*temp=head;
       while(temp->next!=NULL){
        temp=temp->next;
       }
       temp->next=NULL;
       
       }
    

    int main(){

      vector<int> arr = {4,2,5,1,90};

       node *p= arrayLL(arr);
     
  
       // cout<<length(p)<<endl;
      //  cout<<search(20,p)<<endl;
        //deletion head
        // p=deletion(p);
        // p= delitiontail(p);
        //p= deletionk(p,6);

         //p=deletionval(p,10);
          // p=insertbeg(p,90);
          p=insertend(p,50);

          print(p);
 



        return 0;
    }