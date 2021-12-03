#include<bits/stdc++.h>
using namespace std;
int rotatesearch(int arr[],int n,int x){
int start=0;
int end=n-1;
while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==x){
        return mid;
    }else
    if(arr[start]<arr[mid]){
        if(x<arr[mid]&&x>arr[start]){
            start=start;
            end=mid-1;
        }else{
            start=mid+1;
            end=end;
        }
    }else{
         if(x>arr[mid]&&x<arr[end]){
            start=mid+1;
            end=end;
        }else{
            start=start;
            end=mid-1;
        }
    }
}
return -1;
}
int main(){
    int arr[]={10,20,30,40,50,8,9};
    int n=7;
    cout<<rotatesearch(arr,n,50)<<endl;
    return 0;
}