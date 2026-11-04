class Solution {
    vector<string> ans;
public:
    vector<string> generateParenthesis(int n) {
        int open_count = 0;
        int close_count = 0;
        recursion(n,"",open_count,close_count);
        return ans;
    }

    void recursion(int n,string temp,int oc, int cc)
    {

        if(oc == n and cc == n)
        {
            ans.push_back(temp);
            return;
        }
        if (oc < n) {
            recursion(n, temp + "(", oc + 1, cc);
        }
        
        if(oc >  cc)
        {
             recursion(n,temp+=")",oc,cc+1);
        }

    }
};
