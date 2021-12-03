#include<bits/stdc++.h>
using namespace std;

void snake(int arr[4][4]){
    for (int i = 0; i < 4; i=i+2)
    {
        for (int j = 0; j< 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        for (int k = 3; k>=0;k--)
        {
            cout<<arr[i+1][k]<<" ";
        }
        cout<<endl;
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
snake(arr);
    return 0;
}