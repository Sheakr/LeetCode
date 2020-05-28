class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =1;
        int major = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[major])
                count++;
            else count--;
            if(count==0){
                count =1;
                major =i;
            }
            }
        
        return nums[major];
                
        
    }
};