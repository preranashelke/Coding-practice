#include<bits/stdc++.h>
using namespace std;
void bucketsort(int arr[],int n,int k){
int mx=arr[0];
for (int i = 0; i < n; i++)
{
    mx=max(arr[i],mx);
}
mx++;
vector<int> bkt[k];
for (int i = 0; i < n; i++)
{
    int index=(arr[i]*k)/mx;
    bkt[index].push_back(arr[i]);
}

for (int i = 0; i < k; i++)
{
    sort(bkt[i].begin(),bkt[i].end());
}
int index=0;
for (int i = 0; i < k; i++)
{
    for(int j=0;j<bkt[i].size();j++){
        arr[index++]=bkt[i][j];
    }
}

}
int main(){
int arr[]={30,40,10,80,5, 12,70};
int n=7;
bucketsort(arr,n,4);
for(int x:arr){
    cout<<x<<" ";
}
cout<<endl;
 return 0;
}