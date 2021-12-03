#include<bits/stdc++.h>
using namespace std;
void bonacci(int n,int m){
    int arr[m]={0};  //filling array with all zero
arr[n-1]=1;
arr[n]=1;
for (int  i = n+1; i < m; i++)
{
   arr[i]=  arr[i - 1]+arr[i-2]+arr[i-3]; //adding previos n element
   //2*arr[i-1]- arr[i - n - 1];  //formula for easy calculation
}
for (int i = 0; i < m; i++)
{
    cout<<arr[i]<<" ";
}
}

int main(){
 int n=3;
 int m=10;
 bonacci( n, m);
    return 0;
}