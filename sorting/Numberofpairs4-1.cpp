#include<bits/stdc++.h>
using namespace std;
//Given two arrays X and Y of positive integers, find the number of pairs such that xy > yx 
//(raised to power of) where x is an element from X and y is an element from Y.
int findindex(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]>x){
            ans=mid;
            end=mid-1;
        }else{
           start=mid+1;  
        }
    }
    return ans;
}
long long countPairs(int x[], int y[], int m, int n)
{
    sort(x,x+m);
    sort(y,y+n);
     long count=0;
   int one=0,two=0,three=0,four=0,zero=0;
   // counting some special element
   for(int i=0;i<n;i++){
       if(y[i]==0) zero++;
       if(y[i]==1) one++;
       if(y[i]==2) two++;
       if(y[i]==3)  three++;
       if(y[i]==4) four++;
   }
  // cout<<one<<zero<<three<<four<<endl;
   for(int i=0;i<m;i++){
       if(x[i]==0){
           continue;
       } else if(x[i]==1){
           count+=zero;
       }else if(x[i]==2){
           int index=findindex(y,n,2);
           if(index!=-1){
                count+=n-index;
           }
           count+=one+zero;
          count-=three;
          count-=four;
       }else{
           int index=findindex(y,n,x[i]);
           if(index!=-1){
              count=count+n-index; 
           }
            count+=one+zero;
            if(x[i]==3){
            count+=two; 
           }
       }
   }
    return count; 
}

int main(){
int M = 4;
int X[] = {2, 3 ,4, 5};
int N = 3;
int  Y[] = {1 ,2 ,3};
cout<<countPairs(X,Y,M,N)<<endl;
    return  0;
}