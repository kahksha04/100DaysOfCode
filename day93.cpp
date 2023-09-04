// Given a matrix mat of size N x M where every element is either 'O' or 'X'. Replace all 'O' with 'X' that are surrounded by 'X'.

// A 'O' (or a set of 'O') is considered to be surrounded by 'X' if there are 'X' at locations just below, just above, just left and just right of it.

class Solution{
 private:
    void dfs(int i,int j,vector<vector<char>> &mat){
        if(mat[i][j]=='O'){
            mat[i][j]='1';
            
            if(i-1>0)
                dfs(i-1,j,mat);//top
            if(i+1<mat.size())
                dfs(i+1,j,mat);//down
            if(j-1>0)
                dfs(i,j-1,mat);//left
            if(j+1<mat[i].size())
                dfs(i,j+1,mat);//right
        }
    }
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
          //for 1st row and last row             
          for(int i=0;i<n;i++){
               dfs(i,0,mat);//first row
               dfs(i,m-1,mat);//last row
          }
          //for 1st col and last col   
          for(int j=0;j<m-1;j++){
              dfs(0,j,mat);//first col
              dfs(n-1,j,mat);//last col
          }
          
          for(int i=0;i<n;i++){
              for(int j=0;j<m;j++){
                  if(mat[i][j]=='O')
                        mat[i][j]='X';
                  else if(mat[i][j]=='1')
                        mat[i][j]='O';
               }
          }
          
          return mat;
    }
};
