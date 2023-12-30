#include<iostream>
 #include<vector>
using namespace std;

 vector<int>suffix(vector<int>&arr,int n){
        vector<int>pre(n);
        pre[n-1]=arr[n-1];
       
        for(int i=n-2;i>=0;i--){
              pre[i]=pre[i+1]+arr[i];
        }
    return pre;
 }


 int main(){
   vector<int>arr={6,4,5,-3,2,8};
   int n= arr.size();
   arr= suffix(arr,n);
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" "; 
    }

    return 0;
 }