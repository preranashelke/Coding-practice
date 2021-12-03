#include<bits/stdc++.h>
using namespace std;

void transpose1(int arr[4][4]){
int n=4;
int m=4;
for (int i = 0; i < n; i++)
{
   for(int j=i;j<m;j++){
       swap(arr[i][j],arr[j][i]);
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
transpose1(arr);
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}