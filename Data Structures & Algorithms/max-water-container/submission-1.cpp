class Solution {
public:
    int maxArea(const vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;

        int max_area = 0;
        while(left<right)
        {
            // int curr_area = 0;

            int width = right - left ;
            int height = min(nums[left],nums[right]);

            int curr_area = width * height;

            max_area = max(curr_area,max_area);
            if(nums[right] >nums[left])
            {
                left++;
            }
            else // if(nums[left] >= nums[right])
            {
                right--;
            }
        }

        return max_area;
    }
};
