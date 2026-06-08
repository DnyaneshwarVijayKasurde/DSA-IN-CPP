class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0;
        int n=nums.size(),i;
        for(i=0;i<n;i++){
            sum=sum+nums[i];
        }
        // max sum subarray
        int bestend=nums[0];
        int res1=nums[0];
        for(i=1;i<n;i++){
            bestend=max(bestend+nums[i],nums[i]);
            res1=max(res1,bestend);

        }
        // array is negative 
        if(res1 <0)
        return res1;
        // min sum subarray
        bestend=nums[0];
        int res2=nums[0];
        for(i=1;i<n;i++){
            bestend=min(bestend+nums[i],nums[i]);
            res2=min(res2,bestend);

        }
        int res=max(res1, sum-res2);
        return res;
        
    }
};
