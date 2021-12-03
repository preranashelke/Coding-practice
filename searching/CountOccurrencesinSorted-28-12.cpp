#include<bits/stdc++.h>
using namespace std;
int timeoccur(int arr[],int n,int x){
int count=0;
for(int i=0;i<n;i++){
    if(arr[i]==x){
     count++;
    }
}
return count;
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

int timeoccur1(int arr[],int n,int x){  //all over we get logn solution by using first 
                                    //occurance and last occurenace
int first1=firstoccur1(arr,n,x); //logn
if(first1==-1){
    return 0;
}else{
    return (lastoccur1(arr,n,x)-first1+1); //logn
}

}
int main(){
int arr[]={5,10,10,10,10,20,20};
int arr1[]={0,0,0,1,1,1,1};
int n=7;
cout<<timeoccur(arr1,n,1)<<endl;
cout<<timeoccur1(arr1,n,1)<<endl;

    return 0;
}