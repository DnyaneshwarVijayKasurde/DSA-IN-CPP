class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int x = nums.size(), i;
        vector <int> pos;
        vector <int> neg;
        for(i=0;i<x;i++){
            if(nums[i]>= 0){
                pos.push_back(nums[i]);
            } else {
                neg.push_back(nums[i]);
            }
        }
        if(pos.size() == 0){
            for(i=0;i<x;i++){
                nums[i]= nums[i]* nums[i];
            }
            reverse(nums.begin(),nums.end());
            return nums;
        }
        if(neg.size() == 0){
            for(i=0;i<x;i++){
                nums[i]=nums[i]*nums[i];
            }
             return nums;
        }
        //square of negative numbers;
        for(i=0;i<neg.size();i++){
            neg[i]=neg[i]*neg[i]; 
        }
        reverse(neg.begin() , neg.end());
        //squaring positive numbers
        for(i=0;i<pos.size();i++){
            pos[i]=pos[i]*pos[i]; 
        }

        int n= neg.size();
        int m=pos.size();
        int j=0,id=0;
        i=0;
        vector <int> res(n+m);

        
        while(i<n && j<m){
            if(neg[i] <=  pos[j]){
                   res[id]=neg[i];
                   id++;
                   i++;
            }
            else {
                res[id]=pos[j];
                id++;
                j++;
            }
        }
        while(i<n){
            res[id] = neg[i];
            id++;
            i++;
         }
         while(j<m){
            res[id] = pos[j];
            id++;
            j++;
         }
         return res;

        
    }
};
