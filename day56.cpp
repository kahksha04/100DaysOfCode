// Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can 
// take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the 
// matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.

class Solution{
    public:
    bool isSafe(int x,int y,int n,vector<vector<int>> &visit,vector<vector<int>> &m){
        if((x>=0&&x<n)&&(y>=0&&y<n)&&visit[x][y]==0&&m[x][y]==1){
            return true;
        }
        
        return false;
    }
    
    
    void solve(vector<vector<int>> &m,int n,vector<string> &ans,int x,int y,vector<vector<int>> &visit,string path){
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        
        visit[x][y]=1;
        
        int nx=x+1;
        int ny=y;
        if(isSafe(nx,ny,n,visit,m)){
            path.push_back('D');
            solve(m,n,ans,nx,ny,visit,path);
            path.pop_back();
        }
        
        nx=x;
        ny=y-1;
        if(isSafe(nx,ny,n,visit,m)){
            path.push_back('L');
            solve(m,n,ans,nx,ny,visit,path);
            path.pop_back();
        }
        
        nx=x;
        ny=y+1;
        if(isSafe(nx,ny,n,visit,m)){
            path.push_back('R');
            solve(m,n,ans,nx,ny,visit,path);
            path.pop_back();
        }
        
        nx=x-1;
        ny=y;
        if(isSafe(nx,ny,n,visit,m)){
            path.push_back('U');
            solve(m,n,ans,nx,ny,visit,path);
            path.pop_back();
        }
        
        visit[x][y]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0]==0){
            return ans;
        }
        int x=0;
        int y=0;
        vector<vector<int>> visit=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visit[i][j]=0;
            }
        }
        string path="";
        solve(m,n,ans,x,y,visit,path);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
