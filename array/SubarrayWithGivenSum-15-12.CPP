#include<bits/stdc++.h>
using namespace std;
bool givensum(int arr[],int n,int s){
    int curr=arr[0];   //starting sum
    int j=0;  //maintain starting point to remove according condition
for (int i = 1; i < n; i++)
{    
 while(curr>s&&j<i-1){   //if greater sum then remove starting point
  curr=curr-arr[j];
  j++;
 } 
 if(curr==s){  //if equal then return true
   return true;
 }
 if(i<n){   // continue sum
curr=curr+arr[i];
 }
}
return (curr==s);
}

int main(){
    int arr[]={8,3,4,8,8,8};
    int arr1[]={3,7,4,7,7,5};
    int arr2[]={20,30,40,50,50,50,50};
    int arr3[]={1,4,20,3,10,5};
int n=sizeof(arr3)/sizeof(int);
 bool a=givensum(arr3,n,33);
cout<<a<<endl;
    return 0;
}