#include<bits/stdc++.h>
using namespace std;

void countsort1(int arr[],int n,int k){ //efficeint algorithm
    int count[k];     //0(n+k) time complexity as well as space complexity;
for(int i=0;i<k;i++){    //stable not comparison base
    count[i]=0;
}
for (int i = 0; i < n; i++)
{
    count[arr[i]]++;
}
for (int i = 1; i < k; i++)
{
   count[i]=count[i]+count[i-1]; //cummlative array
}
int output[n];
for (int i = n-1; i >=0; i--)
{
   output[count[arr[i]]-1]=arr[i];
   count[arr[i]]--;
}
for (int i = 0; i < n; i++)
{
    arr[i]=output[i];
}

}
void countsort(int arr[],int n,int k){//naive solution
int count[k];
for(int i=0;i<k;i++){
    count[i]=0;
}
for (int i = 0; i < n; i++)
{
    count[arr[i]]++;
}
int index=0;
for (int i = 0; i < k; i++)
{
   for (int j = 0; j< count[i]; j++)
   {
       arr[index]=i;
       index++;
   }  
}
}
int main(){
int arr[]={1,4,4,1,0,1};
int n=6;
countsort1(arr,n,5);
for(int x:arr){
    cout<<x<<" ";
}
cout<<endl;
 return 0;
}