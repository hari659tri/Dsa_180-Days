#include<iostream>
#include<algorithm>
using namespace std;

int main(){
 
 int arr[]={23,4,1,0};
 // this sort in assending order by default 
 sort(arr,arr+4);
 for(int i:arr){
    cout<<i<<" ";
 } 
 cout<<endl;
 // this reverse the order simply not more than that 
 sort(arr,arr+4,greater<int>());
 for(int i:arr){
    cout<<i<<" ";
 }
    return 0;
}