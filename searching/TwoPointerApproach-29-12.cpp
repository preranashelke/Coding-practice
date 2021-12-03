#include<bits/stdc++.h>
using namespace std;
int pairsum(int arr[],int n,int x){//naive solution
 for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
       if(arr[i]+arr[j]==x){
           return 1;
       }
     }
 }
 return 0;
}

bool pairsum1(int arr[],int n,int x){  //two pointer approach
int first=0;
int last=n-1;
while(first<last){
    if(arr[first]+arr[last]==x){
        return  true;
    }else if(arr[first]+arr[last]>x){
        last--;
    }else{
        first++;
    }
}
return false;
}
int main(){
    int arr[]={3,5,9,2,8,10,11};
    int n=7;
    cout<<pairsum(arr,n,17)<<endl;
    sort(arr,arr+n);
    cout<<pairsum1(arr,n,17)<<endl;
    return 0;
}