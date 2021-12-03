#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int b,int e){
 int total=0;
for(int i=b;i<=e;i++){
total=total+arr[i];
}
return total;
}
int mainimumpages(int arr[],int n,int k){ //naive solution 0(n);
    if(n==1){
        return arr[0];
    }
    if(k==1){
        return sum(arr,0,n-1);
    }
    int res=INT_MAX;
 for (int i = 1; i < n; i++)
 {
    res=min(res,max(mainimumpages(arr,i,k-1),sum(arr,i,n-1)));
 }  
 return res;
}

bool isfeasible(int arr[],int n,int k,int mid){
int res=1;
int curr=0;
for(int i=0;i<n;i++){
    if(curr+arr[i]>mid){
   curr=arr[i];
     res++;
    }else{
        curr=curr+arr[i];
    }
}
return (res<=k);
}

int mainimumpages1(int arr[],int n,int k){
int maxa=0;
int total=0;
for(int i=0;i<n;i++){
    total=total+arr[i];
    maxa=max(maxa,arr[i]);
}
int start=maxa;
int end=total;
int res=0;
while(start<=end){
int mid=start+(end-start)/2;
if(isfeasible(arr,n,k,mid)){
   end=mid-1;
   res=mid;
}else{
    start=mid+1;
}
}
return res;
}
int main(){
    int arr[]={10,20,30,40};
    int arr1[]={10,5,20};
    int n=4;
    cout<<mainimumpages(arr,n,2)<<endl;
    cout<<mainimumpages1(arr1,3,2)<<endl;
    return 0;
}