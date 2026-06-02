class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i,left,right,result,n=nums.size();
        int diff = INT_MAX;
        int d;
        sort(nums.begin(),nums.end());
        for(i=0;i < n-2;i++){
            left=i+1;
            right=n-1;
           
            while(left < right){
              int total = nums[i] + nums[right]+ nums[left];
                d=abs(total-target);
                if(diff > d){
                    diff = d;
                    result =total;
                }
                if(total == target){
                    return target;
                    left++;
                    right--;
                }else if(total < target){
                    left++;
                }else {
                    right--;
                }
            }
        }
        return result;
    }
};
