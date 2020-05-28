class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        int dp[rows][columns];
        for(int i =0;i<rows;i++){
            for(int j = 0;j<columns;j++){
                dp[i][j] = matrix[i][j];
            }
        }
        int result = 0;
        for(int i =0;i<rows;i++){
            result = result+dp[i][0];
        }
        for(int i =1;i<columns;i++){
            result = result+dp[0][i];
        }
        for(int i =1;i<rows;i++){
            for(int j = 1;j<columns;j++){
                int mini = min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                if(dp[i][j]>0){
                    dp[i][j] = dp[i][j]+mini;
                }
                result = result+dp[i][j];
                                          
            }
        }
        for(int i =0;i<rows;i++){
            for(int j=0;j<columns;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return result;
        
        
    }
};