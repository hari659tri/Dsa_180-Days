#include<iostream> 
using namespace std;
 int sum=0;
 int f(int n){
    for(int i=1;i<=n;i++){
    sum=sum+i;

    }

    return sum;
 }
int main(){

    int n;
    cin>>n;
    int sum =f(n);
    cout<<sum;

}