#include <iostream>
#include <algorithm>
using namespace std;
//here are two conditions for the  elements to be inverse:
//arr[i] > arr[j]
//i < j

int inversion(int arr[],int n){ //naive solution 0(n^2)
int count=0;
for(int i=0;i<n;i++){
    for (int j = i+1; j < n; j++)
    {
        if(arr[i]>arr[j]){
            count++;
        }
    }
}
return count;
}

int merge(int arr[], int l, int m, int h){
    int count=0;
    int n1=m-l+1, n2=h-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(int j=0;j<n2;j++)
        right[j]=arr[m+1+j];    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k++]=left[i++];
        }else{
            arr[k++]=right[j++];
            count=count+n1-i;
            }
    }
    while(i<n1){
    arr[k++]=left[i++];
    }
        
    while(j<n2){
     arr[k++]=right[j++];    
    }
    return count;
        
}
int inversion1(int arr[],int l,int r){
    int res=0;
    if(r>l){
        int m=l+(r-l)/2;
       res+= inversion1(arr,l,m);
        res+=inversion1(arr,m+1,r);
       res+= merge(arr,l,m,r);
    }
    return res;
}
int main(){
int arr[]={2,4,1,3,5};
int n=5;
cout<<inversion(arr,n)<<endl;
cout<<inversion1(arr,0,4)<<endl;
return 0;
}