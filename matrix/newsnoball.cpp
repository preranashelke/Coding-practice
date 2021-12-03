#include<bits/stdc++.h>
using namespace std;
int snowball(int arr[],int n){
    int res=0;
for(int i=n-1;i>0;){
if(arr[i]==arr[i-1]){
    arr[i]=0;
    arr[i-1]==0;
    i=i-2;
}
if(arr[i]>arr[i-1]){
 int p=arr[i]-arr[i-1];
 res=min(res,p);
 arr[i]=0;
 arr[i-1]=p;
 i--;
}
}

return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  sort(arr,arr+n);
   int m=snowball(arr,n);
    cout<<m<<endl;
    
    return 0;
}