#include<bits/stdc++.h>
using namespace std;
int snowball(int arr[],int n){
int res=0;
for(int i=n-1;i>0;i--){
    int p=0;
    if(arr[i]>arr[i-1]){
        p=arr[i]-arr[i-1];
        arr[i-1]=p;
        arr[i]=0;
        res=min(res,p);
    }else {
        arr[i]=0;
        arr[i-1]=0;
    }
}

return res;
}
int main(){
    int n=3;
    
    int arr[]={7,10,3};
   // sort(arr,arr+n);
    int m=snowball(arr,n);
    cout<<m;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    cout<<endl;
    return 0;
}