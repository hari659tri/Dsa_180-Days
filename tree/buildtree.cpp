#include<iostream>
using namespace std;

 class node{
  public: 
  int data;
  node*left;
  node*right;
  node(int d){
    data=d;
    left=NULL;
    right=NULL;
  }

 };

  node *buildtree(node*root){
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;

    if(data==-1){
      return NULL;
    }
    root=new node(data);
    cout<<"Enter the left child of "<<endl;
    root->left=buildtree(root->left); 
    cout<<"Enter the right child of "<<endl;
    root->right=buildtree(root->right);
    return root;
  }

int main(){
  
   node*root=NULL; // represents empty tree
   root=buildtree(root);



    return 0;
}