#include<bits/stdc++.h>
using namespace std;
void sortcondition1(int arr[],int n){
    int l=0,mid=0, h=n-1; //efficeint solution dutch natinal flag algo
    while (mid<=h)
    {
        if(arr[mid]==0){
            swap(arr[l],arr[mid]);
            l++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[h]);
            h--;
        }
    }
    
}
int main(){
int arr[]={0,1,0,2,1,2};
int n=6;
sortcondition1(arr,n);
for(int x:arr){
    cout<<x<<" ";
}
cout<<endl;
    return 0;
}