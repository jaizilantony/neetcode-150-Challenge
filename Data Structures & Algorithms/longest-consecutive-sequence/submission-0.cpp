class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());

        if (s.empty())
            return 0;

        int curr_len = 1;
        int max_len = 1;

        for (auto it = s.begin(); it != s.end(); ++it) {
            auto nxt = std::next(it);

            if (nxt != s.end() && (*nxt - *it == 1)) {
                curr_len++;
            } 
            else {
                max_len = max(curr_len, max_len);
                curr_len = 1;
            }
        }

        return max_len;
    }
};