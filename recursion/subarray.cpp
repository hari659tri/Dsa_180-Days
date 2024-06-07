#include<iostream>
#include<vector>
using namespace std;
// optimal approach using recursion
 //find the all non-empty subarray of an array 
  void subarray(vector<int>&arr,int i,int j){

    if(j==arr.size()){
     i=i+1;
     j=i;
    }
     // base case
    if(i==arr.size())
    return ;
    
    for(int a=i;a<=j;a++){
        cout<<arr[a]<<" ";//loop run's n*(n+1)/2 times
    }
    cout<<endl;
    subarray(arr,i,j+1); // recursive call takes place is n*(n+1)/2 time 
  }
  // so overall complexity is n*(n+1)/2+n*(n+1)/2=n^2+n/2=n^2 first half for iteration second for recursion
 // time complexity is O(n^2)
 // space complexity is O(n)  
 int main(){
    vector<int>arr={1,2,3,5,5};
    int i=0,j=0;
    subarray(arr,i,j);
 }