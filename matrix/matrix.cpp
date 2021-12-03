#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &matrix,vector<vector<bool>>&visited,int n,int m,int x,int y,int count,int &res){
  
  if(x<0 || y<0 || x>=n || y>=m || matrix[x][y]==0||visited[x][y]==true){
    return ;
}
  if(matrix[x][y]==2){
  res=min(res,count);
  return;
  }

    visited[x][y]=true;
    dfs(matrix,visited,n,m,x,y+1,count+1,res);
     dfs(matrix,visited,n,m,x,y-1,count+1,res);
      dfs(matrix,visited,n,m,x+1,y,count+1,res);
       dfs(matrix,visited,n,m,x-1,y,count+1,res);
      

}
int main(){
    int n,m,x,y;
    cin>>n>>m;
    cin>>x>>y;
    vector<vector<int>> matrix( n ,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    vector<vector<bool>>visited(n,vector<bool>(m,false));
    int res=INT_MAX;
    int count=0;
    dfs(matrix,visited,n,m,x,y,count,res);
    if(res==INT_MAX){
        cout<<"-1"<<endl;;
    }
    cout<<res<<endl;
    return 0;
}