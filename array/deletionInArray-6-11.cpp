#include<bits/stdc++.h>
using namespace std;

int  deletion(int arr[],int n,int k){
    int i;
    for( i=0;i<n;i++){
        if(arr[i]==k){
             break;
        }
    }
    for(int j=i;j<=n;j++){
        arr[j]=arr[j+1];
    }
    return n-1;
}
int main(){

    int arr[]={12,23,14,56,34,24};
    int n=sizeof(arr)/sizeof(int);
  int a=  deletion(arr,n,14);
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}