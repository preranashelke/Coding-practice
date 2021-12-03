#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int low ,int high){  //reverse method
while(high>low){
    int temp=arr[low];
    arr[low]=arr[high];
    arr[high]=temp;
    low++;
    high--;
}
}
void rotateD(int arr[],int n,int d){  //efficeint solution 
 reverse(arr,0,d-1);    //0(n);
 reverse(arr,d,n-1);
 reverse(arr,0,n-1);
}

int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int n=sizeof(arr)/sizeof(int);
rotateD(arr,n,3);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}