#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 //naive approach 
 int main(){

    int arr[]={1,2,3};
    int brr[]={2,5,6};
    int c[6];
    int m=3;
    int n=3;
     for(int i=0;i<m;i++){
        c[i]=arr[i];
     }
     
     for(int i=0;i<n;i++){
        c[m+i]=brr[i];
     }

     sort(c,c+m+n); // time complexity is O((m+n)log(m+n))....                                     

    for(int i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    }

 }