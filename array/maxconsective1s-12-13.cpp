#include<bits/stdc++.h>
using namespace std;

int consective(int arr[],int n){ //0(n^2)

int fix=0;
    for (int  i = 0; i < n; i++)
    {
       int count=0;
       for (int j = i; j < n; j++)
       {
         if(arr[j]==1){
             count++;
         }  else{
             break;
         }
       }
       fix=max(fix,count);
    }
    return fix;
}

int consective1(int arr[],int n){ //efficeint solution
    int fix=0;
     int curr=0;
    for (int i = 0; i < n; i++)
    {
     
      if(arr[i]==0){
          curr=0;
      }else{
        curr++;
        fix=max(fix,curr);
      }
    }
    return fix;
}
int main(){
    int arr[]={1,0,1,1,1,1,0,1,1};
    int arr1[]={0,1,1,1,0,1,1};
    int arr2[]={1,1,1,1};
    int arr3[]={0,0,0};
    int arr4[]={0,1,1,0,1,0};
    int n=sizeof(arr2)/sizeof(int);

    int p=consective1(arr2,n);
cout<<p<<endl;
    return 0;
}