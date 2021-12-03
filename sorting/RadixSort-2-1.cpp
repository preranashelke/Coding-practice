#include<bits/stdc++.h>
using namespace std;
void countsort1(int arr[],int n,int exp){ //efficeint algorithm
    int count[10];     //0(n+k) time complexity as well as space complexity;
for(int i=0;i<10;i++){    //stable not comparison base
    count[i]=0;
}
for (int i = 0; i < n; i++)
{
    count[(arr[i]/exp)%10]++;
}
for (int i = 1; i < 10; i++)
{
   count[i]=count[i]+count[i-1]; //cummlative array
}
int output[n];
for (int i = n-1; i >=0; i--)
{
   output[count[(arr[i]/exp)%10]-1]=arr[i];
   count[(arr[i]/exp)%10]--;
}
for (int i = 0; i < n; i++)
{
    arr[i]=output[i];
}

}
void radixsort(int arr[],int n){ //0(d*(n+b))
 int mx=arr[0];
 for (int i = 0; i < n; i++)
 {
    if(arr[i]>mx){
        mx=arr[i];
    }
 }
 for(int exp=1;mx/exp>0;exp=exp*10){
countsort1(arr,n,exp);
 }
}

int main(){
int arr[]={319,212,6,8,100,50};
int n=6;
radixsort(arr,n);
for(int x:arr){
    cout<<x<<" ";
}
cout<<endl;
 return 0;
}