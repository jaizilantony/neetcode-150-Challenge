class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        vector<int> ans;

        for(int i : nums)
        {
            mpp[i]++;
        }

        vector<vector<int>> bucket(nums.size()+1);

        // for(auto &i : mpp)
        // {
        //     cout<<i.first<<" : "<<i.second<<endl;
        // }

        for (auto& p : mpp) {
            bucket[p.second].push_back(p.first);
        }

        // for(auto &p : bucket)
        // {   
        //     // cout<<p<<" : ";
        //     for(auto &s : p)
        //     {
        //         cout<<s<<" ";
        //     }
        //     cout<<endl;
        // }

        for (int i = nums.size(); i >= 1 && ans.size() < k; i--) {
            for (int num : bucket[i]) {
                ans.push_back(num);

                if (ans.size() == k) {
                    break;
                }
            }
        }

        return ans;
    }
};


// Bucket Sorting 