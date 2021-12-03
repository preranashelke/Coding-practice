#include<bits/stdc++.h>
using namespace std;
int partitionindex(int arr[],int l,int h){ //Lomuto Partition
    int i=l-1;                        //0(1) auxilary space and 1 traversals
    int pivot=arr[h];
    for (int j = l; j <= h-1; j++)
    {
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    //swap(arr[i+1],pivot);not pivot beacuse it is an fix integer
    return i+1;
}
int kthsmallest1(int arr[],int n,int k){ //0(n^2)
 int l=0;                    //better solution than naive for average
 int h=n-1;
 while (l<=h)
 {
    int p=partitionindex(arr,l,h);
    if(p==k-1){
        return p;
    }else if(p<k-1){
        l=p+1;
    }else{
        h=p-1;
    }
 }
 return -1;
}
int kthsmallest(int arr[],int n,int k){//naive solution
sort(arr,arr+n);
return arr[k-1];
}
int main(){
    int arr[]={30,20,5,10,8};
    cout<<kthsmallest(arr,5,4)<<endl;
    int index=kthsmallest1(arr,5,4);
    cout<<arr[index]<<endl;
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}