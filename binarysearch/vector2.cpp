#include<iostream>
#include<vector>
using namespace std;
 

 int main(){
  // declaration of vector 
//   vector<int>v{1,2,3,4};
//   for(int&x:v)
//   cout<<x<<" ";
//   ///second method 
//   vector<int>v={1,2,3,4};

//   for(int i=0;i<v.size();i++)
//    cout<<v[i]<<" ";
   // not know size of vector at run time
//    vector<int>v; // emoty vector of size 0 
   // push_bacK(), pop_back() 
   // size and capacity 
   // size 
   //capacity 
   // capacity>=size
     vector<int>v={1,2,3,4}; // 8 capacity of 
     //  [1,2,6,8,9] [v.begin(),v.end())
    //  cout<<v.size()<<endl;
    //   cout<<v.capacity()<<endl;
    //  v.push_back(9);
    //   cout<<v.size()<<endl;
    //  cout<<v.capacity()<<endl;
    //   v.push_back(6); // size vector== capacty of vector at time double the size of vector 
        
        // for(int i=0;i<10;i++){
        //     cout<<"size before pushback"<<endl;
        //     cout<<v.size()<<endl;
        //    cout<<v.capacity()<<endl;
        //    v.push_back(i);
        //    cout<<"size after pushback"<<endl;
        //     cout<<v.size()<<endl;
        //     cout<<v.capacity()<<endl;

        // }
        // cout<<v.front()<<endl;
        // cout<<v.back()<<endl;
        // cout<<v.empty();
   /* 
    1.push_back
    pop_back
    front
    back 
   empty - bolean value true if vector is empty 
   0 if vector is not empty 

   size 

   */
  auto it=v.end();
  it--;
  cout<<*it<<endl;
   
 }