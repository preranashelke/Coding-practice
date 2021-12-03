#include<bits/stdc++.h>
using namespace std;
int timeoccur1(int arr[],int n,int x){
int start=0;
int end=n-1;
while(start<=end){
    int mid=start+(end-start)/2;
if(arr[mid]==0){
 start=mid+1;
}else {
 if(arr[mid]==1&&arr[mid-1]!=1){
     return n-mid;
 }else{
   end=mid-1;
 }
}
}
return 0;
}

int main(){
int arr1[]={0,0,1,1,1,1,1};
int n=7;
cout<<timeoccur1(arr1,n,1)<<endl;

    return 0;
}