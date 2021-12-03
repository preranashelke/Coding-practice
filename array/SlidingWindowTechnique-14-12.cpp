#include<bits/stdc++.h>
using namespace std;

int SlidingWindow(int arr[],int n,int k){ //naive approch
    int sum=INT_MIN;
    for (int i = 0; i+k-1 < n; i++)
    {
       int curr=0;
       for (int  j = 0; j<k; j++)
       {
          curr=curr+arr[j+i];
       }
       sum=max(sum,curr);  
    }
    return sum;
}

int SlidingWindow1(int arr[],int n,int k){//efficient solution
    int curr=0;
for (int i = 0; i < k; i++)
    curr=curr+arr[i];
int sum=curr;
for (int i = k; i < n; i++)
{
    curr=curr+(arr[i]-arr[i-k]);
    sum=max(sum,curr);
}
return sum;
}
int main(){
    int arr[]={8,3,4,8,8,8};
    int arr1[]={3,7,4,7,7,5};
    int arr2[]={20,30,40,50,50,50,50};
int n=sizeof(arr)/sizeof(int);
int p=SlidingWindow1(arr,n,3);
cout<<p<<endl;
    return 0;
}