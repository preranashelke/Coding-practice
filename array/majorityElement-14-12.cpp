#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[],int n){//naive solution
    for (int i = 0; i < n; i++)
    {
        int count=1;
        for (int j=i+1; j<n; j++)
        {
           if(arr[i]==arr[j]){
               count++;
           }
        }
        if(count>n/2){
            return i;
        }
    }
   return -1; 
}

int majorityElement1(int arr[],int n){ //0(n) complexity and 0(n) space complexity
    int count=1;
    int res=0;
    for (int i = 1; i < n; i++)
    {
     if(arr[res]==arr[i]){
         count++;
     }   else{
         count--;
     }
     if(count==0){
         res=i;
         count=1;
     }
    } 
  count=0;
    for (int i = 0; i < n; i++)
    {
       if(arr[res]==arr[i]){
           count++;
       }
       
    }
    if(count<=n/2){
           return -1;
       }
     return res;
}

int main(){
    int arr[]={8,3,4,8,8,8};
    int arr1[]={3,7,4,7,7,5};
    int arr2[]={20,30,40,50,50,50,50};
   
int n=sizeof(arr)/sizeof(int);
int p=majorityElement1(arr,n);
cout<<p<<endl;
    return 0;
}