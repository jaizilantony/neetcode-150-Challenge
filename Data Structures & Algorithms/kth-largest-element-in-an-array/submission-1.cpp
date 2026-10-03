class Solution {
   public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q(nums.begin(), nums.end());
        k = k - 1;
        while (k--) {
            // cout << q.top() << " ";
            q.pop();
        }
        int ans = q.top();
        return ans;
    }
};
