class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodelete=arr[0];
        int onedelete=INT_MIN;
        int  res=arr[0];
        for(int i= 1;i<arr.size();i++){
            int prevnodelete= nodelete;
            int prevOnedelete=onedelete;
            int v2;
            nodelete=max(nodelete + arr[i] , arr[i]);
            if(onedelete==INT_MIN){
                v2=arr[i];
            }else{
                v2=prevOnedelete+arr[i];
            }
            onedelete=max(v2,prevnodelete);
            res=max(res,max(nodelete,onedelete));
        }
        return res;
    }
};
