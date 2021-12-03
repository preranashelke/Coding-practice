#include<bits/stdc++.h>
using namespace std;
/*You have to help a thief to steal as many as GoldCoins as possible from a GoldMine. There he saw N Gold Boxes an each Gold Boxes consists of Ai Plates each plates consists of Aj Gold Coins, Each Box consist of plates with exactly same number of GoldCoins per plate. Your task is to print the maximum gold coins theif can steal.

Input:
First line consists of T test cases. Each test case consists of three lines.
First line of each test case consistss of an Integer nT denoting the number of plates theif can steal.
Second line of each test case consists of an Integer N denoting the number of Gold Boxes available in the gold mine.
Third line of each test case consists of 2*N spaced Integers Ai,Aj dentoning number of plates in each box and number of gold coins in each plates respectively.

Output:
Print the respective result in each line.
Constraints:
1<=T<=20
1<=nT,Ai<=20
1<=N<=20
1<=Aj<=100
Example:
Input:
1
3
3
1 3 2 2 3 1
Output:
7

*/
int getMax(int arr[],int n){
    int p=0;
    int coins=0;
    for(int i=1;i<n;i=i+2){
        if(coins<arr[i]){
            coins=arr[i];
            p=i-1;
        }
    }
    return p;
}
int maxgold(int arr[],int n,int t){
    int maxcoins=0;
    while(t>0){
        int max=getMax(arr,n);
        if(t>=arr[max]){
          maxcoins=maxcoins+arr[max]*arr[max+1];  
            t=t-arr[max];
            arr[max+1]=0;
        }else{
            maxcoins=maxcoins+t*arr[max+1];
            t=0;
            
        }
    }
    return maxcoins;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int p, n;
	    cin>>p>>n;
	    int arr[2*n];
	    for(int i=0;i<2*n;i++){
	        cin>>arr[i];
	    }
	    cout<<maxgold(arr,2*n,p)<<endl;
	    
	}
	return 0;
}
