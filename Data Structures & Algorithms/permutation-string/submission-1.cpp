class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int win_len = s1.length();

        for(int i =0;i<s2.length();i++)
        {
            string str = s2.substr(i,win_len);
            cout<<str<<endl;
            sort(str.begin(),str.end());

            if(str == s1)
            {
                return true;
            }
        }
        return false;
    }
};
