#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={4,3,6,7,2,3,8,5};
int n=sizeof(arr)/sizeof(int);
int curr=0;
int largest;
for(int i=0;i<n;i++){
    if(arr[i]>curr){
        curr=arr[i];
        largest=i;
    }
}
cout<<largest<<endl;
    return 0;
}