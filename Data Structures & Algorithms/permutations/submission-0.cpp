class Solution {
    vector<vector<int>> ans;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        recursion(0,nums.size(),nums);
        return ans;
    }

    void recursion(int i,int nums_length,vector<int> nums)
    {
        if(i == nums_length)
        {
            ans.push_back(nums);
            return;
        }
        for(int j  = i;j<nums_length;j++)
        {
            swap(nums[i],nums[j]);
            recursion(i+1,nums_length,nums);
            swap(nums[i], nums[j]);
        }
    }
};
