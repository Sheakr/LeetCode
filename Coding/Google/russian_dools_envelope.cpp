class Solution {
    
private:
    bool comapre(vector<int> &v1,vector<int>&v2){
        return(v1[0]<v2[0]);
    }
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(),envelopes.end());
        int n = envelopes.size();
        if(n==0) return 0;
        if(n==1) return 1;
        int dp[n];
        dp[0] = 1;
        int ans = 1;
        
        for(int i =1;i<n;i++){
            //int maxi = 0;
            dp[i] =1;
            for(int j=0;j<i;j++){
                if(envelopes[i][1]>envelopes[j][1] && envelopes[i][0]>envelopes[j][0]){
                    dp[i] = max(dp[i],1+dp[j]);
                    ans = max(dp[i],ans);
                }
            }

        }
        return ans;
        
    }
};