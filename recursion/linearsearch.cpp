#include<iostream>
using namespace std;

 int linear(int arr[],int k,int size){
   
    if(size==0){
        return 0;
    }
    if(arr[0]==k){
        return 1;
    }
    linear(arr+1,k,size-1);
 }

int main(){
  
   int arr[]={3,5,1,2,6};
   int k;
   cin>>k;
  int ans=  linear(arr,k,5);
    if(ans){
    cout<<"Key element is found"<<" ";
    }
    else{
        cout<<"Key element is not found"<<" ";
    }
    return 0;
}