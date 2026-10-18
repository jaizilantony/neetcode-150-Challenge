class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> count(26,0);
        int time = 0;

        for(char i : tasks)
        {
            count[i-'A']++;
        }

        priority_queue<int> pq;

        for(int i : count)
        {
            if(i != 0)
             pq.push(i);
        }

        queue<pair<int,int>> nt;

        while(!pq.empty() || !nt.empty())
        {
            time++;

           if (!pq.empty()) {
                int temp = pq.top() - 1;
                pq.pop();

                if (temp > 0) {
                    nt.push({temp, time + n});
                }
            }

            if(!nt.empty() && nt.front().second == time)
            {
                pq.push(nt.front().first);
                nt.pop();
            }
        }

        return time;
    }
};
