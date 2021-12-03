#include<bits/stdc++.h>
using namespace std;
 int profit1(int arr[],int n){
     int curr=0;
     for (int i = 1; i < n; i++)
     {
         if(arr[i]>arr[i-1]){
             curr=curr+arr[i]-arr[i-1];
         }
     }
     return curr;
 }
int profit(int arr[],int start,int end){ //naive solution
    if(end<=start){
        return 0;
    }
    int curr=0;
for (int i = start; i < end; i++)
{
   for (int j = i+1; j<= end; j++)
   {
      if(arr[j]>arr[i]){
    int new1=arr[j]-arr[i]+profit(arr,start,i-1)+profit(arr,j+1,end);
     curr=max(curr,new1);
      }
   }
   
}
return curr;

}
int main(){
    int arr[]={1,5,3,8,12};
    int n=sizeof(arr)/sizeof(int);
    //int P=profit(arr,0,n-1);
    int P=profit1(arr,n);
    cout<<P<<endl;
    return 0;
}