#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={4,9,6,7,2,3,8,5};
int n=sizeof(arr)/sizeof(int);
int low=0;
int high=n-1;

while(high>low){
    int temp=arr[low];
    arr[low]=arr[high];
    arr[high]=temp;
    low++;
    high--;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}