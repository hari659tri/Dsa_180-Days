#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
 // binary search with fixed size arrays 
 int main(){
    // int arr[]={10,20,30,30,40,50};
    // int x=20;
    // int binary=binary_search(arr,arr+6,x);
    // if(binary){
    //     cout<<"element is found";
    // }
    // else{
    //     cout<<"element is not found";
    // }
    // overflow in binary search
    int low=INT_MAX;
    int high=INT_MAX;
    int medium=INT_MIN;
    int mid=low+(high-low)/2;
    cout<<mid;
    return 0;
 }
//time complexity of this function is The binary_search() function works in O(logN) time complexity if the container on which it is used supports random access iterators otherwise it will take O(N) time.


