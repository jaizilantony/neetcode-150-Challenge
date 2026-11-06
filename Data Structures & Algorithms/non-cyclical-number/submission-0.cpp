class Solution {
    bool is_true =  true;
public:
    bool isHappy(int n) {

        unordered_set<int> seen;
        int sum = 0;

        while(true)
        {
            // int org_num = n;
            while(n != 0)
            {
                sum += (n%10) * (n%10);
                n = n/10;
            }

            if(seen.contains(sum))
            {
                is_true = false;
                break;
            }

            if(sum == 1)
            {
                break;
            }

            seen.insert(sum);
            n = sum;
            sum = 0;
            
        }
        return is_true;
    }
};
