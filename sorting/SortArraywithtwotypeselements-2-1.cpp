#include<bits/stdc++.h>
using namespace std;
void sortcondition(int arr[],int n){ //naive solution
    int temp[n];
    int j=0;
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]<0){
            temp[j]=arr[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            temp[j]=arr[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
       arr[i]=temp[i];
    }
}

void sortcondition1(int arr[],int n){ //efficeint solution lomuto partition
    int l=0;int h=n-1;
int i=l-1;
for (int j = 0; j < n; j++)
{
   if(arr[j]<0){
       i++;
       swap(arr[i],arr[j]);
   }
}

}
int main(){
int arr[]={15,-3,-2,18};
int n=4;
sortcondition1(arr,n);
for(int x:arr){
    cout<<x<<" ";
}
cout<<endl;
    return 0;
}