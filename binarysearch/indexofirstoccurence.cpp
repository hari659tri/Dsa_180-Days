#include<iostream>
using namespace std;
  // first occurence left most index 
 int first(int*arr,int key,int n){
   int s=0;
   int e=n-1;
   int ans;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
        ans=mid;
        e=mid-1; // due to left most occurence 
        }
        else if(arr[mid]>key){
             e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
 }
 int main(){

    int arr[]={1, 3, 5, 5, 5, 5, 67, 123, 125};
   cout<<first(arr,5,10);
 }