#include<iostream>
#include<climits>
using namespace std;
   
   int pass(int arr[][2],int row){
      int ans=INT_MIN,sum,rowindex;
       for(int i=0;i<row;i++){
        sum=0;
        for(int j=0;j<2;j++){
          sum=sum+arr[i][j];
        }
        if(ans<sum){
            ans=sum;
            rowindex=i;
        }
       } 

        cout<<"largest sum will be:"<<ans<<endl;
        cout<<"Index will be:"<<rowindex<<endl;
     }


 int main(){
   int arr[3][2];
     
     //taking input from the user 
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
     }

     pass(arr,3);
 }