#include<bits/stdc++.h>
using namespace std;
int getwater(int arr[],int n){ //0(n^2)
    int res=0;
  for (int i = 1; i < n; i++)
  {
     int lmax=arr[i];
     for(int j=0;j<i;j++){
        lmax=max(lmax,arr[j]); 
     }
     int rmax=arr[i];
     for (int  j = i+1; j < n; j++)
     {
         rmax=max(rmax,arr[j]); 
     }
     res=res+min(rmax,lmax)-arr[i]; 
  }
  return res;
}

int getWater1(int arr[],int n){//0(n) and 0(n) auxiallary space
int res=0;
int rmax[n],lmax[n];
lmax[0]=arr[0];
for (int i = 1; i < n; i++)
{
    lmax[i]=max(arr[i],lmax[i-1]);
}
rmax[n-1]=arr[n-1];
for (int i = n-2; i >=0; i--)
{
   rmax[i]=max(arr[i],rmax[i+1]);
}
for (int i = 0; i < n; i++)
{
  res=res+min(rmax[i],lmax[i])-arr[i];
}

return res;
}


int findWater(int arr[], int n)  //space optimaization
{
    // initialize output
    int result = 0;
 
    // maximum element on left and right
    int left_max = 0, right_max = 0;
 
    // indices to traverse the array
    int lo = 0, hi = n - 1;
 
    while (lo <= hi) {
        if (arr[lo] < arr[hi]) {
            if (arr[lo] > left_max)
                // update max in left
                left_max = arr[lo];
            else
                // water on curr element = max - curr
                result += left_max - arr[lo];
            lo++;
        }
        else {
            if (arr[hi] > right_max)
                // update right maximum
                right_max = arr[hi];
            else
                result += right_max - arr[hi];
            hi--;
        }
    }
 
    return result;
}
int main(){
    int arr[]={5,0,6,2,3};
    int arr1[]={2,0,2};
    int arr2[]={1,2,3};
    int arr3[]={2,0,4,1,5,2,3};
    int n=sizeof(arr)/sizeof(int);
    int p=getWater1(arr,n);
    cout<<p<<endl;
    return 0;
}