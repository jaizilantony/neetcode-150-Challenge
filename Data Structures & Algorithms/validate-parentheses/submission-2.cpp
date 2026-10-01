class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        set<char> hs = {')','}',']'};
        
        for(char ch : s)
        {
            if(hs.contains(ch))
            {

                if (st.empty()) return false; 
                
                char comp = st.top();
  
                if ((ch == ')' && comp == ch - 1) || 
                    (ch == ']' && comp == ch - 2) || 
                    (ch == '}' && comp == ch - 2)) 
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                st.push(ch);
            }
        }

        return st.empty();
    }
};
