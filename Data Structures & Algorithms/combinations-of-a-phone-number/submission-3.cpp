class Solution {
    vector<string> ans;
    vector<string> characters = {"",    "",    "abc",  "def", "ghi",
                                     "jkl", "mno", "pqrs", "tuv", "wxyz"};
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return ans;
        recursion(digits,0,"");
        return ans;
    }

    void recursion(string inp,int ind,string emp)
    {
        if(emp.length() == inp.length())
        {
            ans.push_back(emp);
            return;
        }
        string chars = characters[inp[ind] - '0'];
        for (char c :  chars)
        {
            recursion(inp,ind+1,emp+c);
        }
    }
};
