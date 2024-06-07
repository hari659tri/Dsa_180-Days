 #include<iostream>
 using namespace std;
   class multiply{
    public:
   int x;
   int y;
   multiply(int a,int b){
    x=a;
    y=b;
   }
   int get(){
    return x*y;
   }
   int add(){
    return x+y;
   }
   };
   
 int main(){
    multiply h1(5,6);
    cout<<"Area will be the:\n"<<h1.get()<<endl;
    cout<<h1.add();
 }
 


