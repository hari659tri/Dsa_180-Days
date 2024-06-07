#include<iostream>
using namespace std;
  // liner search work on both sorted and unsorted array
  int search(int arr[],int n,int key){
         
         for(int i=0;i<n;i++)
         if(arr[i]==key)
          return i;
       

     return -1;
     
  }
  
 int main(){
  
  int arr[]={2,4,0,5,9};
  int key=90;
  int idx= search(arr,5,key);
   
    if(idx!=-1){
        cout<<"element is found at the index:"<<idx<<endl;
    }
    else{
        cout<<idx<<endl;
    }
  
 }

 // time compelexity is O(n)..
 // auxilary space is O(1)