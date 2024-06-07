#include<iostream>
using namespace std;

// tree implementation........

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        this->data=val;
        this->left=nullptr;
        this->right=nullptr;

    }
  
 

};

 // it return root node of the created tree
    Node*createTree(){
     cout<<"entre the value"<<endl;
     int data;
     cin>>data;
     // base case..
     if(data==-1){
        return NULL;
     }
     // step1
     Node* root=new Node(data);
     // recursion call for the left subtre 
     cout<<"entre the data for left subtree"<<endl;
     root->left=createTree();
    // recursion call for the right subtree
    cout<<"entre the data for the right subtree"<<endl;
    root->right=createTree();

    return root;
    }



 int main(){
  Node*root=createTree();
  cout<<root->data<<" "<<endl;

 }