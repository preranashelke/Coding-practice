#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int i){
    int largest=i,left=2*i+1,right=2*i+2;
    if(left<n&&(arr[left]>arr[largest])) largest=left;
    if(right<n&&(arr[right]>arr[largest])) largest=right;
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void buildHeap(int arr[],int n){
    for(int i=(n-2)/2;i>=0;i--){
        heapify(arr,n,i);
    }
}
void heapsort(int arr[],int n){
buildHeap(arr,n);
for (int i = n-1; i >=1; i--)
{
    swap(arr[i],arr[0]);
    heapify(arr,i,0);
}


}
int main(){
int arr[]={10,15,50,4,20};
int n=5;
heapsort(arr,n);
for(int x:arr){
    cout<<x<<" ";
}
cout<<endl;
 return 0;
}