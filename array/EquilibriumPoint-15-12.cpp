#include<bits/stdc++.h>
using namespace std;

bool checkequilibruim(int arr[],int n){ //naive solution
for (int  i = 0; i < n; i++)
{
    int prefixsum=0;
    int suffixsum=0;
 for (int j = 0; j < i; j++)
 {
   prefixsum=prefixsum+arr[j];
 }
    for (int j = i+1; j < n; j++)
    {
        suffixsum=suffixsum+arr[j]; //suffix sum upto i
    }
    if(prefixsum==suffixsum){ //prefix sum upto i
        return true;
    }
}
return false;
}

bool checkequilibruim1(int arr[],int n){
int sum=0;
for (int i = 0; i < n; i++)
{
    sum=sum+arr[i];
}
int prefixsum=0;
for(int i=0;i<n;i++){
    if(prefixsum=sum-arr[i]){
        return true;
    }
    prefixsum=prefixsum+arr[i];
    sum=sum-arr[i];
}
return false;
}
int main(){
    int arr[]={3,4,8,-9,20,6};
    int n=sizeof(arr)/sizeof(int);
cout<<checkequilibruim1(arr,n)? " true":"false";
cout<<endl;
}