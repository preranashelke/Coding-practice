#include<iostream>
#include<algorithm>
using namespace std;
int partitionindex(int arr[],int l,int h){ //Lomuto Partition
    int i=l-1;                        //0(1) auxilary space and 1 traversals
    int pivot=arr[h];
    for (int j = l; j < h-1; j++)
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
void quicksort(int arr[],int l,int h){
if(l<h){
    int p=partitionindex(arr,l,h);
    quicksort(arr,l,p-1);
    quicksort(arr,p+1,h);
}
}
int main(){
    int arr[]={8,4,7,9,3,10,5};
    quicksort(arr,0,6);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}