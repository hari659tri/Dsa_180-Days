#include<iostream>
#include<string>
  using namespace std;

 int main(){
    
    string str1="Hello";
    string str2="World";
    string str3=str1+str2;
    string str4=str1.append(str2);
    cout<<str4<<endl;
  return 0;
 }