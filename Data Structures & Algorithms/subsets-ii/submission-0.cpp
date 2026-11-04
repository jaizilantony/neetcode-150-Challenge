class Solution {
    vector<vector<int>> ans;
    set<vector<int>> check_dup;
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(),nums.end());
        recursion(0, temp, nums.size(),nums);
        return ans;
    }
    void recursion(int index, vector<int> temp, int n,vector<int> nums) {
        if (index >= n) {
            if(!check_dup.contains(temp)){
                ans.push_back(temp);
                check_dup.insert(temp);
            }
            return;
        }
        temp.push_back(nums[index]);
        recursion(index + 1, temp, n,nums);
        temp.pop_back();
        recursion(index + 1, temp, n,nums);
    }
};