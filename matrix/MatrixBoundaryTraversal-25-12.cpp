#include<bits/stdc++.h>
using namespace std;
void boundrytraversal(int arr[4][4]){
int n=4;
int m=4;
if(n==1){
    for (int i = 0,j=0; j < m; j++)
    {
        cout<<arr[i][j]<<" ";
    }
}else if(m==1){
    for(int i=0,j=0;i<n;i++){
        cout<<arr[i][j]<<" ";
    }
}
else{
for(int i=0,j=0;j<m;j++){
    cout<<arr[i][j]<<" ";
}
for(int i=1,j=m-1;i<n;i++){
    cout<<arr[i][j]<<" ";
}
for(int i=n-1,j=m-2;j>=0;j--){
    cout<<arr[i][j]<<" ";
}
for(int i=n-2,j=0;i>=0;i--){
    cout<<arr[i][j]<<" ";
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
boundrytraversal(arr);
    return 0;
}