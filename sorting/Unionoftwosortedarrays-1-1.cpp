#include <iostream>
#include <algorithm>
using namespace std;

void union2(int a[],int b[],int n,int m){ //0(n+m)
int i=0,j=0;
while(i<n&&j<m){
if(i>0&&a[i]==a[i-1]){
    i++;
 continue;
}    
if(j>0&&b[j]==b[j-1]){
    j++;
    continue;
}
if(a[i]<b[j]){
    cout<<a[i]<<" ";
    i++;
}else if(a[i]==b[j]){
    cout<<a[i]<<" ";
    i++;j++;
}else{
    cout<<b[j]<<" ";
    j++;
}
}
while(i<n){
if(i==0||a[i]!=a[i-1]){
    cout<<a[i]<<" ";
    i++;
}
}
while(j<m){
if(j==0||b[j]!=b[j-1]){
    cout<<b[j]<<" ";
    j++;
}
}

}
void union1(int a[],int b[],int n,int m){ //naive solution
int temp[n+m];                         //0(n+m(log(n+m)))
for(int i=0;i<n;i++){
    temp[i]=a[i];
}
for (int i = 0; i < m; i++)
{
    temp[n+i]=b[i];
}
sort(temp,temp+n+m);
for(int i=0;i<n+m;i++){
if(i==0||temp[i]!=temp[i-1]){
    cout<<temp[i]<<" ";
}
}
}

int main() {
   int a[]={3,5,8};
   int b[]={2,8,9,10,15};
union1(a,b,3,5);
cout<<endl;
union2(a,b,3,5);
cout<<endl;
 return 0;
}