#include<bits/stdc++.h>
using namespace std;

int median(int arr[3][3]){
int r=3;
int c=5;
int min=arr[0][0];
int max=arr[0][c-1];
for(int i=0;i<r;i++){
 if(arr[i][0]<min){
     min=arr[i][0];
 }
 if(arr[i][c-1]>max){
     max=arr[i][c-1];
 }
}
int medpos=(r*c+1)/2;
while(min<max){
int mid=max+(max-min)/2;
int midpos=0;
for(int i=0;i<r;i++){
  midpos+=upper_bound(arr[i],arr[i]+c,mid)-arr[i];
}
if(midpos>medpos){
    max=mid;
}else{
    min=mid+1;
}

}
return min;
}

int main(){
int arr[3][3];
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cin>>arr[i][j];
    } 
}
cout<<median(arr);
    return 0;
}