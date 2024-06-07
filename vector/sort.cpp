#include<bits/stdc++.h>
using namespace std;
 
 // sorting the non vectored array...
  
   int main(){
    int arr[]={2,0,1,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
     sort(arr,arr+n); // arr pointing to the last element where arr+n pointing to the last to next position 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
   }
