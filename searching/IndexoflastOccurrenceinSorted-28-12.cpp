#include<bits/stdc++.h>
using namespace std;

int lastoccur1(int arr[],int n,int x){ //logn solution
int start=0;
int end=n-1;
while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]>x){
       start=start;
       end=mid-1;
    }else if(arr[mid]<x){
       start=mid+1;
       end=end;
    }else{
        if(arr[mid]==x&&arr[mid]!=arr[mid+1]){
            return mid;
        }else{
            start=mid+1;
            end=end;
        }
    }
}
return -1;
}
int main(){
int arr[]={5,10,10,10,10,20,20};
int n=7;
cout<<lastoccur1(arr,n,10)<<endl;

    return 0;
}