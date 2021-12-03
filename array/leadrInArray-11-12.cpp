#include<bits/stdc++.h>
using namespace std;

void leading(int arr[],int n){ //naive solution
    for (int  i = 0; i < n; i++)  //0(n^2)
    {
        int curr=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]>curr){
                curr=arr[j];
            }
        }
        if(curr==arr[i]){
            cout<<arr[i]<<" ";
        }
    }
    
}
void leading1(int arr[],int n){  //efficient solution
    int leader=arr[n-1];    //complexity 0(n),space=0(1)
    cout<<leader<<" ";
     for(int i=n-2;i>=0;i--){
         if(arr[i]>leader){
             leader=arr[i];
             cout<<leader<<" ";
         }
     }
}
int main(){

    int arr[]={7,10,4,3,6,5,2};
    int arr1[]={30,20,10};
    int n=sizeof(arr)/sizeof(int);
    leading1(arr,n);
    
    return 0;
}