#include<bits/stdc++.h>
using namespace std;

//naive solution
int maxDiff(int arr[],int n){
int maxdiff=arr[1]-arr[0];
for(int i=1;i<n;i++){
    for (int j = i+1; j < n; j++)
    {
        if(arr[j]-arr[i]>maxdiff){
            maxdiff=arr[j]-arr[i];
        }
    }
    
}
return maxdiff;
}

int maxDiff1(int arr[],int n){ //efficint solution
    int res=arr[1]-arr[0];
    int mini=arr[0];
    for (int i = 1; i < n; i++)
    {
        res=max(res,arr[i]-mini);
          mini=min(mini,arr[i]);
        
    }
 return res;   
}
int main(){

    int arr[]={7,9,5,6,3,2};
    int arr1[]={30,10,8,2};
    int n=sizeof(arr1)/sizeof(int);
    int d=maxDiff1(arr1,n);
    cout<<d<<endl;
    return 0;
}