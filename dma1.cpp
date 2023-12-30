#include<iostream>
 using namespace std;

 int main(){
//     int *p=new int;
//    float *p1=new float;
//    char *c=new char;
//    bool *b=new bool;
//      *p=10;
//      *p1=30.9;
//      *c='k';
//      *b=true;
//      cout<<*p<<endl;
//      cout<<*p1<<endl;
//      cout<<*c<<endl;
//      cout<<*b<<endl;
      
//       delete p;
//       delete p1;
//       delete c;
//       delete b;

     // for array    

     int *p=new int[6];
     // value dal do
     cout<<"Pls entre the value";
     for(int i=0;i<6;i++)
      cin>>p[i];
     //  value print krna start kr do
      for(int i=0;i<6;i++)
     cout<<p[i]<<" ";
     
    
      delete[] p;



       return 0;
  
  }