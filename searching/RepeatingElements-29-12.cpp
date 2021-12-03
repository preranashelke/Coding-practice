#include<bits/stdc++.h>
using namespace std;
int repeating(int arr[],int n){
int slow=arr[0]+1;
int fast=arr[0]+1;
do     //phase one 
  {
 slow=arr[slow]+1;
 fast=arr[arr[fast]+1]+1  ; 
} while (slow!=fast);

slow=arr[0]+1;
while(slow!=fast){
    slow=arr[slow]+1;
    fast=arr[fast]+1;
}
    return slow-1;
}
int main()
{
    int arr[]={0,2,1,3,5,4,6,2};

    int n=8;
    cout<<repeating(arr,n)<<endl;

    return 0;
}