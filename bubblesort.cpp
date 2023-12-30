#include<iostream>
 
 using namespace std;

    void sort(int *arr,int n){
            
             for(int i=0;i<n-1;i++){  //  this loop take care of  number of round 
                 bool swapped=0;
                  for(int j=0;j<n-1;j++){

                if(arr[j]>arr[j+1]){
                 swap(arr[j],arr[j+1]); //  this swap adjacent number of element  if left element is greater than right 
              //  element 
              swapped=1;

                  }   
                
            }
             
             if(swapped==0){
                break;  // beacause in this case no element is swapped and array is sorted and take care of best case 
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