#include <bits/stdc++.h>
#define ll long long
using namespace std;

int primenumbers(int N){   //sieve algorithm
   
 bool primeNum[N+1];
 memset(primeNum, 1, sizeof(primeNum));
  for(int i=2; i*i<=N; i++) {

        if(primeNum[i]) {
            for(int j=i*i; j<=N; j=j+i) {
                primeNum[j] = 0;
            }
        }
    }
 
    // print squares of primes upto n.
    int counter=0;
     for(int i=2; i<=N; i++) {

        if(primeNum[i]) {
            counter++;
           // primeArray.push_back(i);
        }
    }
          
 return counter;
}

int main() {
	
	   unsigned long long n,a;
	    cin>>n;
	     a=sqrt(n);
	    cout<<primenumbers(a)<<endl;
	    
	
	
	return 0;
}