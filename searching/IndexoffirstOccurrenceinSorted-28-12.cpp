#include<bits/stdc++.h>
using namespace std;

int firstoccur(int arr[],int n,int x){ //naive solution
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
            break;
        }
    }
    return -1;
}

int firstoccur1(int arr[],int n,int x){ //logn solution
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
        if(arr[mid]==x&&arr[mid]!=arr[mid-1]){
            return mid;
        }else{
            start=start;
            end=mid-1;
        }
    }
}
return -1;
}
int main(){
int arr[]={5,10,10,15,20,20,20};
int n=5;
cout<<firstoccur(arr,n,20)<<endl;
cout<<firstoccur1(arr,n,20)<<endl;

    return 0;
}