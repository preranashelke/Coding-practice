#include<bits/stdc++.h>
using namespace std;

void mergedtwoarray(int a[],int b[],int n,int m){
int k=0,j=0,i=0;
int temp[n+m];
while(k<n&&j<m){
if(a[k]<=b[j]){
temp[i]=a[k];
k++;
i++;
}else{
    temp[i]=b[j];
    j++;
    i++;
}
}
while(k<n){
    temp[i]=a[k];
    k++;
    i++;
}
while(j<m){
    temp[i]=b[j];
    j++;
    i++; 
}

for(int p=0;p<n+m;p++){
cout<<temp[p]<<" ";
}
cout<<endl;
}
int main(){
int arr1[]={10,15,20};
int arr2[]={5,6,6,15};
int n=3;
int m=4;
mergedtwoarray(arr1,arr2,n,m);
    return 0;
}
