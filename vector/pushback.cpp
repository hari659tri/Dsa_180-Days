#include<iostream> 
#include<vector>
using namespace std;

 int main(){

    vector<int>vec;

     for(int i=0;i<10;i++){
        vec.push_back(i);
        cout<<"size is"<<vec.size()<<endl;
        cout<<"capacity is"<<vec.capacity()<<endl;
     }
 


 }