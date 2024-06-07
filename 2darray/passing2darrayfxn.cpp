#include<iostream>
using namespace std;

void pass(int arr[][2], int row) {
    
    // find sum of the array element 
     int sum;
     for(int i=0;i<row;i++){
        sum=0;
        for(int j=0;j<2;j++){
            sum=sum+arr[i][j];
        }
        cout<<"Sum the array elements is:"<<sum<<endl;
     }
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