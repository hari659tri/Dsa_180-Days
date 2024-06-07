#include<iostream>
#include<vector>
using namespace std;
// brute force approach time complexity O(n*k)
    void rightrotatebyone(vector<int>&v){
        int temp=v[v.size()-1];
        for(int i=v.size()-2;i>=0;i--){
            v[i+1]=v[i];
        }
        v[0]=temp;
    }
    void rotate(vector<int>&v,int k){
        k=k%v.size();
        for(int i=1;i<=k;i++){
          rightrotatebyone(v);
        }
    }

 int main(){
     vector<int>arr{1,2,3,4,5};
     int k;
     cin>>k;
     rotate(arr,k);
     for(int&x:arr)
     cout<<x<<" ";
 }