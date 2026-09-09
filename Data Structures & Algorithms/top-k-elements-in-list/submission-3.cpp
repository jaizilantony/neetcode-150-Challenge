class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        vector<int> ans;

        for (int i : nums) {
            mpp[i]++;
        }

        vector<pair<int, int>> temp(mpp.begin(), mpp.end());

        sort(temp.begin(), temp.end(), [](auto& a, auto& b) {
            return a.second > b.second;  // highest frequency first
        });

        int count  = k;
        for (auto& p : temp) {
            if(count > 0)
            {
                ans.push_back(p.first);
                count--;
            }
            else
            {
                break;
            }
        }
        // return {};
        return ans;
    }
};
