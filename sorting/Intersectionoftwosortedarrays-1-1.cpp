#include <iostream>
#include <algorithm>
using namespace std;
void intersection1(int a[],int b[],int n,int m){ //effiecient solution 0(n+m)
int i=0,j=0;
while(i<n&&j<m){
if(i>0&&a[i]==a[i-1]){
    i++;
    continue;
}
if(a[i]<b[j]){
i++;
}
if(b[j]<a[i]){
    j++;
}
if(a[i]==b[j]){
    cout<<a[i]<<" ";
    i++;j++;
}
}
}
void intersection(int a[],int b[],int n,int m){ //naive solution 0(n*m)
 for (int i = 0; i < n; i++)
 {
     if(i>0&&a[i]==a[i-1]){
         continue;
     }
     for (int j = 0; j < m; j++)
     {
         if(a[i]==b[j]){
             cout<<a[i]<<" ";
             break;
         }
     }   
 }
}

int main() {
   int a[]={3,5,10,10,10,15,15,20};
   int b[]={5,10,10,15,30};
intersection(a,b,8,5);
cout<<endl;
intersection1(a,b,8,5);
cout<<endl;
 return 0;
}