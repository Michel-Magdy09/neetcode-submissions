class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>result(nums.size());
        vector<int>leftproducts(nums.size());
        vector<int>rightproducts(nums.size());
        leftproducts[0]=1;
        for(int i =1;i<nums.size();i++)
        {
            leftproducts[i]=leftproducts[i-1]*nums[i-1];
        }
        rightproducts[nums.size()-1]=1;
        for(int i =nums.size()-2;i>=0;i--)
        {
            rightproducts[i]=rightproducts[i+1]*nums[i+1];
        }
        for(int i =0;i<nums.size();i++){
            result[i]=leftproducts[i]*rightproducts[i];
        }
        return result;
    }
};
