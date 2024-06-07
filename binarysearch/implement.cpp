#include<iostream>
using namespace std;
   int  binary_search(int *arr,int n,int key){
    int s=0;
    int e=n-1;
    int mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]>key)
        e=mid-1;
        else
        s=mid+1;
    

    }
    return -1;
   }
   // time complexity is O(logn) // auxilary space is O(1)....
 int main(){
    int arr[]={3, 4, 6, 7, 9, 12, 16, 17};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<binary_search(arr,n,60);

 }