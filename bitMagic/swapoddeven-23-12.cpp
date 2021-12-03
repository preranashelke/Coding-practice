#include <iostream>
using namespace std;

//Given an unsigned integer N. The task is to swap all odd bits with even bits. 
//For example, if the given number is 23 (00010111), it should be converted to 43(00101011).
// Here, every even position bit is swapped with adjacent bit on right side(even position bits 
//are highlighted in binary representation of 23), and every odd position bit is swapped with adjacent 
//on left side.
unsigned int swapoe(unsigned int n){
    unsigned int even = n& 0xAAAAAAAA;
    unsigned int odd= n& 0x55555555;
    even=even>>1;
    odd=odd<<1;
    
    return even|odd;
    
    
}

int main() {
	int t;
	cin>>t;
	while(t--){
	  unsigned int N;
	  cin>>N;
	  cout<<swapoe(N)<<endl;
	    
	}
	return 0;
}