class Solution:
    def isPalindrome(self, s: str) -> bool:
        str_val = [c for c in s.lower() if c.isalnum()]
        print(str_val)

        i : int  = 0
        j : int  = len(str_val) - 1
        # print(j)

        while i < j:
            if str_val[i] != str_val[j]:
                return False
            i+=1
            j-=1    

        return True