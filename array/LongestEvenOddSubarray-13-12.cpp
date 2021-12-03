#include<bits/stdc++.h>
using namespace std;
int longestsub(int arr[],int n){
int res=1;
int count=1;
for (int i = 1; i < n; i++)//efficeint solution
{
    if((arr[i]%2==0&&arr[i-1]%2!=0)||(arr[i]%2!=0&&arr[i-1]%2==0)){
        count++;
        res=max(res,count);
    }else{
        count=1;
    }
}
return res;
}
int main(){
    int arr[]={10,12,14,7,8};
    int arr1[]={7,13,14};
    int arr2[]={10,12,8,4};
    int arr3[]={5,10,20,6,3,8};
int n=sizeof(arr)/sizeof(int);
int p=longestsub(arr,n);
cout<<p<<endl;
    return 0;
}