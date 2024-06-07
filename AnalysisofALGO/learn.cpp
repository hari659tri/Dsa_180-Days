#include<iostream> 
using namespace std;

 int main(){
  
//    int arr[5]={1,2}; // if we decleared the array but not initialized then it contains the garbage value 
//    // but if intialized the array but not all spaces then rest of garbage values are present 
//    cout<<arr[0]<<endl;
//    cout<<arr[3];
//  int arr[5];
//  fill_n(arr,5,2); // if you want to initialize whole array by the same value then used it .
//  for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
//  }

  // break and continue statements
//   for(int i=0;i<5;i++){
//     if(i==3){
//        continue; // for i=3 it escape and  begin or forced to go the next iteration..
//     }
//     cout<<i<<" ";
//   }
 
 char arr[5]="112";
 cout<<arr[0]<<endl;
 cout<<arr<<endl;
 char*p=arr;
 cout<<*(p+2);




  








    return 0;
 }