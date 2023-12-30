// 1: An array is given in decreasing order with
// Key, Find the index of key, if key is not
// present, print -1;

 #include<iostream>
 using namespace std;

  int findkeyindex(int arr[],int n,int key){
     
       int start=0,end=n-1,mid;

       while(start<=end){
        mid=start+(end-start)/2;

        if(arr[mid]==key)
        return mid;    // this will return the index of your key element 
        else if(arr[mid]>key)
         start=mid+1;
        else
         end=mid-1;
       
       }
 
    return -1;  // this indicate the element is not  found 
        
    
  }

  int main(){

  int arr[100];
  int n;
  cout<<"entre the number of element in the array\n";
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];

  }

   int key ;
   cout<<"entre the key element:";
   cin>>key;

    cout<<findkeyindex(arr,n,key);

    return 0;
  }