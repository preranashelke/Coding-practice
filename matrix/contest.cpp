#include<bits/stdc++.h>
using namespace std;

int minitems( int arr[],int k,int n){
    int res=0;
    for(int i=0;i<n;i++){
        res+=arr[i];
        n=n-k;
    }
    return res;
}
int main(){

    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int freek[m];
    for(int i=0;i<m;i++){
        cin>>freek[i];
    }
     
     sort(arr,arr+n);

int i=0;
while(i<m){
    int res=minitems(arr,freek[i],n);
    cout<<res<<" ";
    i++;
}

    return 0;
}