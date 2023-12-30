#include<iostream>
using namespace std;
 // revision needs many times 
  int sort(int arr[],int size){
          
          for(int i=0;i<size;i++){
            
            int j=i; // first  take single length array then double and so on 
            while(j>0&&arr[j-1]>arr[j]){
                swap(arr[j],arr[j-1]);  //  swap function swap n-1 times if n elements  
                j--;

            }

          }
            
            
        

  }

  int main(){

      int arr[]={ 64, 34, 25, 12, 22, 11, 90 };
    
     int size=sizeof(arr)/sizeof(arr[0]);
     sort(arr,size);
         
     for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
      }
        
    return 0;
  }