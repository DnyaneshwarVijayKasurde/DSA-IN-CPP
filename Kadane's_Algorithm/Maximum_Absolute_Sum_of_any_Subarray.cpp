class Solution {
public:
    int maxSum(vector<int> nums){
        int bestending=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            bestending=max(bestending+nums[i], nums[i]);
            res=max(res,bestending);
        }
       return res;
    }
    int minSum(vector<int> nums){
         int bestending=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            bestending=min(bestending+nums[i],nums[i]);
            res=min(res,bestending);
        }
       return res;
    }
    int maxAbsoluteSum(vector<int>& nums) {
        int maxi=abs(maxSum(nums));
        int mini=abs(minSum(nums));
         int res=max(maxi,mini);
         return res;
        
    }
};
