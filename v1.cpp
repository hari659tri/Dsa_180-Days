#include<iostream>
#include<vector>    // for vector
#include<algorithm>
using namespace std;

int main(){

     vector<int>v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);
        // cout<<"size of array is "<<v.size()<<endl;
        // cout<<"capacity of array is "<<v.capacity()<<endl;
        cout<<endl;
        //  for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        // v.erase(v.begin()+1);
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        //  cout<<endl;
        // v.clear();
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        
        //  cout<<v.front()<<endl;
        //  cout<<v.back()<<endl;
        //  sort(v.begin(),v.end(),greater<int>());
        //  sort(v.begin(),v.end(),vector<int>());
        //  for(int i=0;i<v.size();i++){
        //   cout<<v[i]<<" ";
        //  }
             
       cout<<binary_search(v.begin(),v.end(),5);

}