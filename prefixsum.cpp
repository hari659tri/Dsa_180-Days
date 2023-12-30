#include<iostream>
#include<vector>
using namespace std;
//logic of prefix sum is simple take a new array of same  size of given array and store
// the sum of all the elements till that index in the new array
// formula  is pre[i]=pre[i-1]+arr[i];

 vector<int> prefix(vector<int>&arr,int n){
    vector<int>pre(n);
    pre[0]=arr[0];

     for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+arr[i];
     }
   return pre;
 }

 int main(){
  
   vector<int>arr={6,4,5,-3,2,8};
   int n= arr.size();
   arr= prefix(arr,n);
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" "; 
    }

    return 0;


 }