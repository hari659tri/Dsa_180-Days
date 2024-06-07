#include<iostream>
using namespace std;

 int binarysearch(int arr[],int s,int e,int key){
    if(s>e)
    return 0;
     int mid=s+(e-s)/2;
     if(arr[mid]==key){
        return mid;
     }
     else if(arr[mid]>key){
      binarysearch(arr,s,mid-1,key);
     } 
     else{
        binarysearch(arr,mid+1,e,key);

     }
    
 

  }


 int main(){
  
  int arr[]={1,2,3,4,5,6,7};
  int key;
  cin>>key;
  if(binarysearch(arr,0,6,key)){
    cout<<"Element is found at index:"<<binarysearch(arr,0,6,key);
  }
  else{
   cout<<"Element is not found";
  }
    return 0;
 }