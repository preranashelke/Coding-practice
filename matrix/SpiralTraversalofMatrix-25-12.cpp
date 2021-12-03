#include<bits/stdc++.h>
using namespace std;
void spiral(int arr[4][4]){
    int n=4;
    int m=4;
int top=0,right=m-1,left=0,bottom=n-1;
while (top<=bottom&&left<=right){
for (int  i = left; i <=right; i++)
{
    cout<<arr[top][i]<<" ";
}
top++;
for (int i = top; i <=bottom; i++)
{
    cout<<arr[i][right]<<" ";
}
right--;
if(top<=bottom){
for (int i = right; i>=left; i--)
{
    cout<<arr[bottom][i]<<" ";
}
bottom--;
}
if(left<=right){
for (int i = bottom; i>=top; i--)
{
    cout<<arr[i][left]<<" ";
}
left++;
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
spiral(arr);
    return 0;
}