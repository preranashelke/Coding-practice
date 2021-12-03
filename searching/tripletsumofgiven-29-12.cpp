#include<bits/stdc++.h>
using namespace std;
bool pairsum1(int arr[],int first,int last,int x){  //two pointer approach
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
bool tripletsum1(int arr[],int n,int x){ //0(n^2)
for(int i=0;i<n;i++){
    if(pairsum1(arr,i+1,n-1,x-arr[i])){
        return true;
    }
}
return false;
}
int main(){
    int arr[]={2,3,4,8,9,20,40};
    int n=7;
    sort(arr,arr+n);
    cout<<tripletsum1(arr,n,32)<<endl;
    return 0;
}