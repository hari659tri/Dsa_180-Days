#include<iostream>
using namespace std;
 
 int f(int n){
    if(n==0||n==1){
        return 0;
    } 
    else{
        return f(n-1);
    }
 }

int main(){
    int n;
    cout<<f(n);
}