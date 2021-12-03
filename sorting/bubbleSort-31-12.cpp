#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                  swap(arr[j+1],arr[j]);
            }
        }
    }
}
int main(){
    
    int arr[]={3,6,5,7,1,4,2,9,8};
    int n=9;
    bubblesort(arr,n);
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    return 0;
}