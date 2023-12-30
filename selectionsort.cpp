 #include<iostream>
 #include <bits/stdc++.h>
 using namespace std;
    void insort(int arr[],int size){
         
        for(int i=0;i<size-1;i++){
           
       int  miniindex=i; // consider MINIINDEX  IS I AND SEARCH MINIINDEX 

          for(int j=i+1;j<size;j++){
            
             if(arr[j]<arr[miniindex]){
               miniindex=j;

             }

          } 
          swap(arr[i],arr[miniindex]); //  return type of swap is void 

        }


    }
  
  int main(){
    
     int arr[]={64,25,12,22,11};

     int size=sizeof(arr)/sizeof(arr[0]);
     
     insort(arr,size);

      for(int i=0;i<size;i++){

          cout<<arr[i]<<" ";
      }

  }
  