#include<bits/stdc++.h>
using namespace std;

//xor operator
//x^y=y^x
//x^x=0
//x^0=x;
int oneodd(int arr[],int n){
int res=0;
for (int  i = 0; i < n; i++)
{
    res=res^arr[i];
}
return res;

}
int main(){
int arr[]={4,3,4,4,4,5,5,6,6};
int n =sizeof(arr)/sizeof(int);
cout<<oneodd(arr,n)<<endl;
    return 0;;
}