#include<iostream>
using namespace std;
   // reverseing in O(1)  auxilary space and O(m*n) time complexity 
 int main(){
       int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
      
      // outer loop take care of number of rows
      int low; 
      int high;
      for(int i=0;i<4;i++){
        low=0;
        high=3;
        while(low<high){
            swap(arr[i][low],arr[i][high]);
            low++;
            high--;
        }
      }
   
      for(int i=0;i<4;i++){
          for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;

      }
    
       

 }