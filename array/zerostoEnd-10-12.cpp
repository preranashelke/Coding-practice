#include<bits/stdc++.h>
using namespace std;

void zeroa(int arr[],int n){ //n^2 
    int high=n-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            int j=i;
            while(j<n){
                arr[j]=arr[j+1];
                j++;
            }
            arr[high]==0;
            high--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }   
}
 void zeroa1(int arr[],int n){
int count=0;
for (int i = 0; i < n; i++)
{
    if(arr[i]!=0){
        swap(arr[count],arr[i]);
        count++;  
    }
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

 }
int main(){
int arr[]={1,2,3,0,4,0,5,6,7};
int n=sizeof(arr)/sizeof(int);
zeroa1(arr,n);

    return 0;
}