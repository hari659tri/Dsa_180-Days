 //  different method to solve selection sort  in this we peek maximum element of array ann put it last and so on 
 // select maximum and swap,it concept we are using . tc is bi-o(n^2)

  #include<bits/stdc++.h>
  using namespace std;

    void sort(int arr[],int size){

      for(int i=size-1;i>0;i--){
        int ind=i;

        for(int j=i-1;j>=0;j--){
              if(arr[j]>arr[ind])
              ind=j;
        }

         swap(arr[i],arr[ind]);
      }

    }

 int main(){
         int n;
         cin>>n;
         int* arr= new int[n];
            for(int i=0;i<n;i++){
            cin>>arr[i];
      }
    
         sort(arr,n);
      
      for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
      }
    
    return 0;
   }