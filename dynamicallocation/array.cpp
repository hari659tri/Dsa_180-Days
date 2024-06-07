#include<iostream>
using namespace std;


 int main(){

    int*p=new int[10];
  delete[] p;
  for(int i=0;i<10;i++){
    cin>>p[i];
  }
   
   for(int i=0;i<10;i++){
    cout<<p[i]<<endl; 
   }
  return 0;
 }