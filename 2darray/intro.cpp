#include<iostream>
using namespace std;

 int main(){
    // creating 2-d array's
   int arr[3][2];
     
     // taing input from the user 

     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
     }

    // printing the input values of the array
      // printing valur into row major order 
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
     }

      cout<<endl;
      cout<<endl;
     // printing valur into coloumn major order....
     // outer loop reprsent the coloumn 
       for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
     }

 }