class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int firstNum = -1;
        int seconNum = -1;
        int count1 = 0;
        int count2 = 0;
        
        for(int i =0;i<nums.size();i++){
            if(nums[i] == firstNum){
                count1++;
            }
            else if(nums[i]==secondNum){
                count2++;
            }
            else if(count1 == 0){
                firstNum = nums[i];
                count1 = 1;
            }
            else if(count2 == 0){
                secondNum = nums[i];
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
            
        }
        vector<int>ans;
        int count1 = 0;
        int count2 = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i] == firstNum){
                count1++;
            }
            else if(nums[i] == secondNum){
                count2++;
            }
        }
        int sz = nums.size();
        if(count1 > sz/3) ans.push_back(firstNum);
        if(count2 > sz/3) anspush_back(secondNum);
        return ans;
        
    }
};