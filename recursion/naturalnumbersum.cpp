#include<iostream>
using namespace std;
 int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+sum(n-1);
    }
 }
 int main(){

    int n;
    cin>>n;
    cout<<sum(n);
 }
// Time Complexity: O(n)
// auxilary space : O(n)
// space complexity: O(n)


