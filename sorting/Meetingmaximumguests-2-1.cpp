#include<bits/stdc++.h>
using namespace std;
//you are given arrival and departure times of the guests, 
//you need to find the time to go to the pary so that you can meet maximum people.

int maxguest(int arr[],int dep[],int n){

    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=1;int j=0;
    int res=1;int curr=1;
   while(i<n&&j<n){
       if(arr[i]<=dep[j]){
           curr++;
           i++;
       }else{
          curr--;
          j++;
       }
       res=max(curr,res);
   }
   return res;
    
}
int main(){
int arr[]={900,600,700};
int dep[]={1000,800,730};
int n=3;
cout<<maxguest(arr,dep,n)<<endl;    
    return 0;
}