#include<bits/stdc++.h>
using namespace std;
int peakelement(int arr[],int n){//naive solution
if(n==1){
    return arr[0];
}
if(arr[0]>=arr[1]){
    return arr[0];
}
if(arr[n-1]>=arr[n-2]){
    return arr[n-1];
}
for(int i=1;i<n-1;i++){
    if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1]){
        return arr[i];
    }
}
return -1;
}

int peakelement1(int arr[],int n){  //logn time complexity
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if((mid==0||arr[mid]>=arr[mid-1])&&(mid==n-1||arr[mid]>=arr[mid+1])){
            return arr[mid];
        }
        if(arr[mid]<arr[mid-1]){
            start=start;
            end=mid-1;
        }else{
            start=mid+1;
            end=end;
        }
    }
    return -1;
}
int main(){
    int arr[]={8,9,10,12,15};
    int n=5;
    cout<<peakelement(arr,n)<<endl;
    cout<<peakelement1(arr,n)<<endl;
    return 0;
}