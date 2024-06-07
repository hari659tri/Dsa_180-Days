#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
 int main(){
    // vector 
    vector<int>v{30,2,-4,0,2};
    // sort(v.begin(),v.end());  // sort in incereasing order 
    // if you want to sort in decreasing order then sort(v.begin(),v.end(),greater<int>())
    // sort(v.begin(),v.end());
    // for(int&x:v){
    //     cout<<x<<" ";

    // }
    //    sort(v.begin(),v.end(),greater<int>());

    //     for(int&x:v){
    //     cout<<x<<" ";

    // }
    // binary_serach() , lowerbound and upper bound and many more

    vector<int>::iterator it=v.begin();
    // cout<<*it<<" "<<endl;
    // it++;
    // cout<<*it<<endl;
    //   it=next(it,2);
    // cout<<*it<<endl;
    // it=v.end();
    // it--;
    // cout<<*it<<endl;

    // advanced function 
     advance(it,2);
     cout<<*it;

  

 }