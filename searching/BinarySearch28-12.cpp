#include<bits/stdc++.h>
using namespace std;

int binarySearch1(int arr[],int start,int end,int x){ //recursive solution

if(start>end){
    return -1;
}
      int mid=start+(end-start)/2;
      if(arr[mid]==x){
          return mid;
      }else if(arr[mid]>x){
         return binarySearch1(arr,start,mid-1,x); 
      }else{
          return binarySearch1(arr,mid+1,end,x);
      }
}
int binarySearch(int arr[],int n,int x){ //iterative solution
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
        start=start;
        end=mid-1;
        }else{
         start=mid+1;
         end=end;
        }
    }
    return -1;
}
int main(){

    int arr[]={10,20,30,40,50,60};
    int n=6;
    cout<<binarySearch(arr,n,15)<<endl;
    cout<<binarySearch1(arr,0,n-1,25)<<endl;;
    return 0;
}