#include<bits/stdc++.h>
using namespace std;

int countset(int x){//Brian and Kerningham Algorithm
    int count=0;
 while(x>0){
     x=x&(x-1);
     count++;
 }
 return count;
}
int countset1(int x){ //naive solution traversing through every element
int count=0;  //0(logn)
while(x>0){
if((x&1)==1){
    count++;
}
 x=x>>1;
}
return count;
}

//Lookup Table 0(1)
 int table[256];
	
	// recursive function to count set bits 
	void initialize() { 

      // To initially generate the table algorithmically:
      table[0] = 0;
      for (int i = 0; i < 256; i++)
      {
          table[i] = (i & 1) + table[i / 2];
      }
	} 
	
	int countSetBits(int n)
	{
	    return table[n & 0xff] + 
        table[(n >> 8) & 0xff] + 
        table[(n >> 16) & 0xff] + 
        table[n >> 24]; 
	}
int main(){
     initialize();
int x;
cout<<"enter any number"<<endl;
cin>>x;
int p=countSetBits( x);
cout<<p<<endl;
    return 0;
}