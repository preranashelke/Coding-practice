#include<iostream>
#include<algorithm>
using namespace std;

int partition3(int arr[],int l,int h){//Hoare partition
    int i=l-1;
    int j=h+1;                       //0(1) auxilary space and 1 traversals less comparison
 int pivot=arr[l];
 while(true){
do
{
    i++;
} while (arr[i]<pivot);
do
{
    j--;
} while (arr[j]>pivot);

if(i>=j) return j;
swap(arr[i],arr[j]);
 } 
}

int partition2(int arr[],int l,int h){ //Lomuto Partition
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
void partition1(int arr[],int n,int m){ //naive solution
    int temp[n];                       //0(n) auxilary space and 3 traversals
    int k=0;
    for (int i = 0; i < n; i++)
    {
      if(arr[i]<=arr[m]){
          temp[k]=arr[i];
          k++;
      }
    }
    for (int  i = 0; i < n; i++)
    {
       if(arr[i]>arr[m]){  
           temp[k]=arr[i];
           k++;
       }
    }
    for(int p=0;p<n;p++){
       arr[p]=temp[p];
    }
}
int main(){
  int arr[]={3,8,6,12,10,7};
  int n=6;
  //partition1(arr,n,5);
  cout<<partition2(arr,0,5)<<endl;
  for(int x:arr){
      cout<<x<<" ";
  }
  cout<<endl;
  int arr1[]={5,3,8,4,2,7,1,10};
  cout<<partition3(arr1,0,7);
  cout<<endl;
  for(int x:arr1){
      cout<<x<<" ";
  }
  cout<<endl;
    return 0;
}
