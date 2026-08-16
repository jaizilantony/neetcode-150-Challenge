class Solution {
    int final_ans = 0;
    void binarysearch(const vector<int> &nums)
    {
        int l = 0;
        int r = nums.size() - 1;
        int mid = 0;
        while(l<r)
        {
            mid = l + (r-l) / 2;

            if(nums[mid] > nums[r])
            {
                l = mid+1;
            }
            else
            {
                r = mid;
            }
        }
        final_ans = nums[r];
    }

public:
    int findMin(vector<int> &nums) {
        binarysearch(nums);
        return final_ans;
    }
};
