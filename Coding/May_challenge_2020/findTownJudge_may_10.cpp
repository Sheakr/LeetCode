class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int *inDegree = new int[N+1];
        int *outDegree = new int[N+1];
        for(int i =0;i<=N;i++){
            inDegree[i]=0;
            outDegree[i]=0;
        }
        for(int i =0;i<trust.size();i++){
            inDegree[trust[i][1]]++;
            outDegree[trust[i][0]]++;
        }
        for(int i =1;i<=N;i++){
            if(inDegree[i] == N-1 && outDegree[i]==0) return i;
            
        }
        return -1;      
    }
};