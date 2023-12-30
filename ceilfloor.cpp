#include<iostream>
 #include<vector>
using namespace std;
// floor of x will be x or next smaller element than x
// ceil of x will be x or next greater element than x edge case is when x is greater than the largest element in the array
// floor of x will be x or next smaller element than x edge case is when x is smaller than the smallest element in the array
// what is edge case?
// edge case is when the input is not in the range of the expected input or the input is not in the range of the expected output
  // jis in input ke liye humara code nahi chal raha hai usko edge case bolte hai

 int floor(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    int mid;
    int ans;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x){
            return arr[mid];
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(high>=0){
        return arr[high];
    }
    else{
        return -1;
    
    }
    
 }

 int ceil(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    int mid;
    int ans;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x){
            return arr[mid];
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(low<n){
        return arr[low];
    }
    else{
        return -1;
    
    }
    
 }

int main(){
  int arr[]={1,2,3,4,5,6,7,8,9,10};
    cout<<floor(arr,10,0)<<endl;
    cout<<ceil(arr,10,0)<<endl;
}