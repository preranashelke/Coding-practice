#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[],int n){
int res=1;
int i=1;
while (i<n)
{
   while (i<n&&arr[i]==arr[i-1])
   {
       res++;
       i++;
   }
   cout<<arr[i-1]<<"->"<<res<<endl;
   i++;
   res=1;
}
}
int main(){
int arr[]={1,1,2,2,2,3,3,3,3,4,4};
int n=sizeof(arr)/sizeof(int);
frequency(arr,n);

    return 0;
}