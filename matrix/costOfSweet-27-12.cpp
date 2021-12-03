#include<bits/stdc++.h>
using namespace std;
//Jeny love Sweets so much. Now she is at famous restaurant and wants to eat M pieces of a particular sweet. 
//Cost of nth sweet can only be determined by the determinant of matrix of order n x n, 
//where n = 1 to M. The (i, j)th term of matrix is given as:

//A[i][j]= minimum(i, j) *(-1)((i-1)*n + (j-1)).

//Matrix indexes starts with 1. The task is to find the cost of M sweets.

 int determinant( vector<vector<int>> arr,int n){
    
      
 }

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
    }
    if(n==2){
        cout<<0<<endl;
    }
    if(n%2==0&&n!=2){
        cout<<(n/4)*2<<endl;
    }
    if(n%2==1&&n!=1){
        cout<<((n-1)/4)*2+1<<endl;
    }
}
	return 0;
}