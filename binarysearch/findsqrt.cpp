#include<iostream>
using namespace std;
 
 int sqrt(int n){
    int ans;
    for(int i=1;i<n;i++){
        if(i*i<=n){
            ans=i;
        }
        else{
            break;
        }
    }
    return ans;
 }

 int main(){
    int n;
    cin>>n;
    cout<<sqrt(n);
    return 0;
 }