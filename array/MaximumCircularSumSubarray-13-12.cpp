#include<bits/stdc++.h>
using namespace std;

int longestcircularsub(int arr[],int n){//naive solution
    int res=arr[0];
    for(int i=0;i<n;i++){
        int curr_sum=arr[i];
        int curr_res=arr[i];
        for (int j = 1; j < n; j++)
        {
            int index=(i+j)%n;
            curr_sum=curr_sum+arr[index];
            curr_res=max(curr_res,curr_sum);
        }
        res=max(res,curr_res);
    }
return res;
}

int maxsub1(int arr[],int n){ //efficient solution
 int res=arr[0];
int  maxending=arr[0];
 for (int i = 1; i < n; i++)
 {
   maxending=max(maxending+arr[i],arr[i]);
   res=max(res,maxending);
 }
 return res;

}

int longestcircularsub1(int arr[],int n){ //efficeint solution
int normalmax=maxsub1(arr,n);
if(normalmax<0){
    return normalmax;
}
int curr_sum=0;

for (int i = 0; i < n; i++)
{
   curr_sum=curr_sum+arr[i];
   arr[i]=-arr[i];
}
int res=max(normalmax,curr_sum+maxsub1(arr,n));
return res;
}

int main(){
    int arr[]={5,-2,3,4};
    int arr1[]={3,-4,5,6,-8,7};
    int arr2[]={-3,4,6,-2};
   
int n=sizeof(arr)/sizeof(int);
int p=longestcircularsub1(arr,n);
cout<<p<<endl;
    return 0;
}