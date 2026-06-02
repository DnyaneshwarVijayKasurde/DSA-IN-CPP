class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> f;
        int low=0,high=0,res=0,n=s.size();
        for(high=0;high<n;high++){
            f[s[high]]++;
            int k = high - low + 1;
            while(f.size()<k){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);
                }
                low++;
                k=high-low + 1;
            }
            int len=high - low+1;
            res=max(res,len);
        }
        return res; 
    }
};
