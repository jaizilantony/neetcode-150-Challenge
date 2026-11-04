class Solution:
    def generateParenthesis(self, n: int) -> List[str]:

        result = []

        def recursion(temp:str,oc:int,cc:int):

            if(oc == n and cc == n):
                result.append(temp)
                return

            if(oc < n):
                recursion(temp+"(",oc+1,cc)


            if(oc > cc):
                recursion(temp+")",oc,cc+1)

        recursion("",0,0)    
        return result
        