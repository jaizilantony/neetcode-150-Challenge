// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {

//         // unordered_set<char> st;
//         deque<int> st
//         int longest_size = 1;

//         // map<char,int> mpp;

//         // for(const char& p: s)
//         // {
//         //     mpp[p]++;
//         // }

//         // return mpp.size();
//         for(const char &p : s)
//         {
//             if(!st.contains(p))
//             {
//                 st.insert(p);
//                 longest_size = std::max(longest_size, (int)st.size());
//             }
//             else
//             {
//                 auto itr = st.find(p);
//                 st.erase(st.begin(),itr);
//                 // st.insert(p);
//                 // longest_size = std::max(longest_size, (int)st.size());           
//             }
//         }

//         return longest_size;
//     }
// };
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        deque<char> st;
        int longest_size = 0;

        for (const char &p : s) {

            auto itr = find(st.begin(), st.end(), p);

            if (itr == st.end()) {
                st.push_back(p);
            }
            else {
                st.erase(st.begin(), itr + 1);
                st.push_back(p);
            }

            longest_size = max(longest_size, (int)st.size());
        }

        return longest_size;
    }
};