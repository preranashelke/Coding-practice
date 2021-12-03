#include<bits/stdc++.h>
using namespace std;

void transpose1(int arr[4][4]){  //first transpose matrix then reverse the every column 
int n=4;
int m=4;
for (int i = 0; i < n; i++)
{
   for(int j=i;j<m;j++){
       swap(arr[i][j],arr[j][i]);
   }
}
}
void anticlockwise1(int arr[4][4]){
    int m=4;
    int n=4;
transpose1(arr);
for(int j=0;j<m;j++){
for(int i=0;i<n/2;i++){
swap(arr[i][j],arr[n-i-1][j]);
}
}
}
void anticlockwise(int arr[4][4]){////0(n^2) auxillary space
int n=4;
int m=4;
int temp[4][4];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        temp[n-j-1][i]=arr[i][j];
    }
}
for (int  i = 0; i < n; i++)
{
    for(int j=0;j<m;j++){
        arr[i][j]=temp[i][j];
    }
}
}
int main(){
int arr[4][4];
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
        cin>>arr[i][j];
    } 
}

//anticlockwise(arr); //0(n^2) auxillary space
anticlockwise1(arr); //0(1) auxillary space
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
  return 0;
}