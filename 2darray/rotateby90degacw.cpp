#include<iostream>
using namespace std;

// rotation of matrix in anticlockwise by 90 degree

 int main(){
    int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
      
    int temp[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            temp[4-j-1][i]=arr[i][j];
        }
    }

    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }

    





 }