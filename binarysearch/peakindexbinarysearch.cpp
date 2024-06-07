 #include<bits/stdc++.h>
 using namespace std;
 int peakIndexInMountainArray(vector<int>& arr) {
         int s=0;
         int e=arr.size()-1;
         int mid;
        
          while(s<=e){
              mid=e+(s-e)/2;
              if(mid==0){
                return mid;
              }
              else if(mid==arr.size()-1){
                return mid;
              }
              if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){  //5>3 w s=3 
                   return mid;
              }
              else if(arr[mid]>arr[mid-1]){
                  s=mid+1;

              }
              else{
                  e=mid-1;
              }
          }
    return -1;
 }


 int main(){
    vector<int> arr={0,3,5,12,2};
    int size=sizeof(arr)/sizeof(arr[0]);
  cout<<peakIndexInMountainArray(arr);
 }