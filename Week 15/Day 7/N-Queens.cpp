class Solution {
    public:
        bool isvalid(int n, vector<string>& v, int row, int col) {
            for(int i=0; i<n; i++) {
                if(v[i][col] == 'Q') {
                    return false;
                }
            }
    
            for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--) {
                if(v[i][j] == 'Q') {
                    return false;
                }
            }
    
            for(int i=row-1, j=col+1; i>=0 && j<n; i--, j++) {
                if(v[i][j] == 'Q') {
                    return false;
                }
            }
            return true;
        }
    
        void solve(int n, vector<vector<string>>& ans, vector<string>& v, int row) 
        {
            if(row == n)
            {
                ans.push_back(v);
                return;
            }
    
            for(int col=0; col<n; col++) 
            {
                if(isvalid(n, v, row, col)) 
                {
                    v[row][col] = 'Q';
                    solve(n, ans, v, row+1);
                    v[row][col] = '.';
                }
            }
        }
    
        vector<vector<string>> solveNQueens(int n) {
            vector<vector<string>> ans;
            vector<string> nQueens(n, string(n, '.'));
            solve(n, ans, nQueens, 0);
            return ans;
        }
    };