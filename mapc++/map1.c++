#include<iostream>
#include<map>
using namespace  std;

 int main(){
  
  map<int,int> mp;
 
  mp.insert({10,200});
 
  mp.insert(make_pair(20,400));

  mp[40]=900;
// updating value 
 //  mp.insert({40,800}); // this will not update the key value it is simply discareded if key is present 
  mp[40]=800; // by the help of the [] bracket we can update the value of the key 
  // if any key not exist then it initialize it default value zero  if you not provide any value 
  mp[50];
 // mp.erase(10);
//   for(auto &x:mp){
//     cout<<x.first<<" "<<x.second<<" ";
//   }

  for(auto it=mp.begin();it!=mp.end();it++){
    cout<<it->first<<" "<<it->second<<" ";
  }


 }