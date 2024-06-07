      #include<iostream>
      using namespace std;
   
      bool issorted(int arr[],int size){
      if(size==0||size==1){
        return true;
      }
      
      if(arr[0]>arr[1]){
        return false;
      }
      else{
      bool ans=issorted(arr+1,size-1);
       return ans;
      }

  
      }
      
     int main(){
     int n;
     cin>>n;
     int *arr=new int[n]; // dynamically memory allocated for the array by the pointer 
     
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     
     bool ans= issorted(arr,n);
      
      if(ans){
        cout<<"array is sorted";
      }
      else{
        cout<<"array is not sorted";
      }

     return 0;
      }