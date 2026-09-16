class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        // for(int i : stones)
        // {
        //     cout<<i<<endl;
        // }

        // if(stones.size() == 2)
        // {
        //     return stones.
        // }

        while(stones.size() != 1)
        {
            sort(stones.begin(),stones.end());
            
            int n1 = stones[stones.size()-1];
            int n2 = stones[stones.size()-2];

            stones.pop_back();
            stones.pop_back();

            stones.push_back(n1 - n2);
        }
        return stones[0];
    }
};
