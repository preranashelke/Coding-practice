#include<bits/stdc++.h>
using namespace std;

void twoodd(int arr[],int n){
int res=0,res1=0,res2=0;
for (int  i = 0; i < n; i++)
{
    res=res^arr[i];
}
int sn=res&(res-1);
for (int i = 0; i < n; i++)
{
    if((arr[i]&sn)!=0){
    res1=res1^arr[i];
    }else{
      res2=res2^arr[i];
    }
}
cout<<res1<<" "<<res2<<endl;

}
int main(){
int arr[]={3,4,3,4,5,4,4,6,7,7};
int n =sizeof(arr)/sizeof(int);
twoodd(arr,n);
    return 0;;
}