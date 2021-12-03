#include<bits/stdc++.h>
using namespace std;
void rotate1(int arr[],int n){
    int temp=arr[0];
    for (int i = 0; i < n; i++)
    {
      arr[i]=arr[i+1];  
        
    }
    arr[n-1]=temp;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    
}
void rotateD(int arr[],int n,int d){//n^2
    for (int  i = 0; i < d; i++)
    {
        rotate1(arr,n);
    }
    for (int  i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }
}

void rotateD1(int arr[],int n,int d){  //efficint solution with space complexity 0(n)
    int temp[n];
    for (int i = 0; i < d; i++)
    {
        temp[i]=arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i-d]=arr[i];
    }
    
    for (int i = 0; i < d; i++)
    {
        arr[n-d+i]=temp[i];
    }
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    
}
int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    //rotate1(arr,n);
    cout<<endl;
    rotateD1(arr,n,3);
    cout<<endl;
    return 0;
}