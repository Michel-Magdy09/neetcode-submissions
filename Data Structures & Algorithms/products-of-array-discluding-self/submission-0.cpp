class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>result(nums.size());
        for(int i=0;i<nums.size();i++){
            int x=1;
            for(int j=0;j<nums.size();j++){
                if(i==j) continue;
                x*=nums[j];
            }
            result[i]=x;
        }
        return result;
    }
};
