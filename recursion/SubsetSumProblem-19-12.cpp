#include<bits/stdc++.h>
using namespace std;

int sumcount(int arr[],int n,int sum){
    if(n==0){
        return (sum==0)? 1:0;
    }

  return  sumcount(arr,n-1,sum)+ sumcount(arr,n-1,sum-arr[n-1]);


}
int main(){

    int arr[]={10,20,15};
    int n=sizeof(arr)/sizeof(int);
    int sum=25;
    int p=sumcount(arr,n,sum);
    cout<<p<<endl;
    return 0;
}