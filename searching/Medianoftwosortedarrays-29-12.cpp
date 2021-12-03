#include<bits/stdc++.h>
using namespace std;
double getMed(int arr1[],int arr2[],int n1,int n2){ //logn
int start=0;
int end=n1;
while(start<end){
int i1=start+(end-start)/2;
int i2=(n1+n2+1)/2-i1;
int min1= (i1==n1)? INT_MAX:arr1[i1];
int max1=(i1==0)?INT_MIN:arr1[i1-1];
int min2=(i2==n2)? INT_MAX:arr2[i2];
int max2=(i2==0)?INT_MIN:arr2[i2-1];
if(max2<=min1&&max1<=min2){
    if((n1+n2)%2==0){
      return  ((double)max(max1,max2)+min(min1,min2))/2;
    }else{
            return (double) max(max1,max2);
    }
}else if(max1>min2)
    end=i1-1;
else
    start=i1+1;
}
}
int main() {
 int a1[] = {10, 20, 30, 40, 50}, n1 = 5, a2[] = {5, 15, 25, 35, 45}, n2 = 5;
cout << getMed(a1, a2, n1, n2)<<endl;
	return 0;
}
