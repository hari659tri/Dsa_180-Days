#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int count=0; 

    for(int i=5;i<=n;i=i*5){
        count=count+n/i; // counting number of 5 in n
    }
    cout<<count;  

    // time complexity is O(logn) and  Auxilary space complexity is O(1)
}