#include<iostream>
using namespace std;

   void bubble(int*arr,int size){
    bool check;
     for(int i=0;i<size-1;i++){ 
        // outer loop tells number of steps needed....
        check=false;
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                check=true;
            }
        }
        if(check==false) // this condition optimized the complexity to the O(n) for the best case....
         break;
     }
   }

 int main(){
    int arr[]={13,46,24,52,20,9};
    int size=sizeof(arr)/sizeof(arr[0]);
     bubble(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

 }