#include<bits/stdc++.h>
using namespace std;
int remdubli(int arr[],int n){
 int temp[n];
 temp[0]=arr[0];
 int res=1;
 for(int i=1;i<n;i++){
     if(temp[res-1]!=arr[i]){
     temp[res]=arr[i];
     res++;
     }
 }
 for(int i=0;i<res;i++){
     arr[i]=temp[i];
 }
 return res;
}
int main(){
    int arr[]={10,20,20,30,30,30};
    int n=sizeof(arr)/sizeof(int);
   int res= remdubli(arr,n);
for(int i=0;i<res;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}