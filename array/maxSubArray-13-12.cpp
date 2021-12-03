#include<bits/stdc++.h>
using namespace std;

int maxsub(int arr[],int n){ //naive solution
    int sum=arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr=0;
       for (int j= i; j < n; j++)
       {
           curr=curr+arr[j];
           if(curr>sum){
               sum=curr;
           }
       } 
    }
    return sum;
}
int maxsub1(int arr[],int n){ //efficient solution
 int res=arr[0];
int  maxending=arr[0];
 for (int i = 1; i < n; i++)
 {
   maxending=max(maxending+arr[i],arr[i]);
   res=max(res,maxending);
 }
 return res;
}
int main(){
    int arr[]={2,3,-8,7,-1,2,3};
    int arr1[]={5,8,3};
    int arr2[]={-6,-1,-8};
int n=sizeof(arr1)/sizeof(int);
int p=maxsub1(arr1,n);
cout<<p<<endl;
    return 0;
}