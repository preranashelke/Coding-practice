
#include<bits/stdc++.h>
using namespace std;

class Solution
{   
public:

    void getCofactor(vector<vector<int> > & matrix, vector<vector<int> > & temp,   int p,   int q,   int n)
    {
        int i = 0, j = 0;
        for (  int row = 0; row < n; row++)
        {
            for (  int col = 0; col < n; col++)
            {
                if (row != p && col != q)
                {
                    temp[i][j++] = matrix[row][col];

                    // Row is filled, so increase row index and
                    // reset col index
                    if (j == n - 1)
                    {
                        j = 0;
                        i++;
                    }
                }
            }
        }
    }
    /* Recursive function for finding determinant of matrix.
    n is current dimension of matrix[][]. */
    int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
        // Initialize result
        int D = 0; 

        // Base case : if matrix contains single element
        if (n == 1)
            return matrix[0][0];

        // To store cofactors
        vector<vector<int> > temp(n, vector<int>(n)); 

        // To store sign multiplier
        int sign = 1; 

        // Iterate for each element of first row
        for (  int i = 0; i < n; i++)
        {
            // Getting Cofactor of matrix[0][i]
            getCofactor(matrix, temp, 0, i, n);
            D += sign * matrix[0][i] * determinantOfMatrix(temp, n - 1);

            // terms are to be added with alternate sign
            sign = -sign;
        }
        return D;
    }
};
int main(){

int n;
cin>>n;
vector<vector<int> > matrix(n);

for (int i = 0; i < n; i++)
{
  matrix[i].assign(n,0);
  for(int j=0;j<n;j++){
      cin>>matrix[i][j];
  }
}
Solution ob;

cout<<ob.determinantOfMatrix(matrix,n)<<endl;
    return 0;
}