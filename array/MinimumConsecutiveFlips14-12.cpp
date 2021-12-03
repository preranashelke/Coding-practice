#include<bits/stdc++.h>
using namespace std;

void flips(int arr[],int n){
for (int i = 1; i < n; i++)
{
    if(arr[i]!=arr[i-1]){
        if (arr[i]!=arr[0])
        {
           cout<<"from "<<i<<" to ";
        }else
        {
            cout<<i-1<<endl;
        }
    }
}
if (arr[n-1]!=arr[0])
{
   cout<<n-1<<endl;
}

}
int main(){
    int arr[]={1,1,0,0,0,1,1};
    int arr1[]={1,0,0,0,1,0,0,1,1,1,1};
    int arr2[]={0,1};
   
int n=sizeof(arr1)/sizeof(int);
flips(arr1,n);
//cout<<p<<endl;
    return 0;
}