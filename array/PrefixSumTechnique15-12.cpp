#include<bits/stdc++.h>
using namespace std;
int prefix_sum[10000]; 
void prefixsum(int arr[],int n){

   prefix_sum[0]=arr[0];
   for (int  i = 1; i < n; i++)
   {
       prefix_sum[i]=arr[i]+prefix_sum[i-1];
   }
}
int  getsum(int prefix_sum[],int l,int r ){
if(l!=0){
    return prefix_sum[r]-prefix_sum[l-1];
}else{
    return prefix_sum[r];
}
}
int main(){

    int arr[]={2,8,3,9,6,5,4};
    int n=sizeof(arr)/sizeof(int);
prefixsum(arr,n);
for (int  i = 0; i < n; i++)
{
    cout<<prefix_sum[i]<<" ";
}
cout<<endl;
cout<<getsum(prefix_sum,1,3)<<endl;
cout<<getsum(prefix_sum,0,2)<<endl;
   
    return 0;
}