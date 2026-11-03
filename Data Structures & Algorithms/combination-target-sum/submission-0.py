class Solution:
    def combinationSum(self, nums: List[int], target: int) -> List[List[int]]:
        result = list()

        def recursive(sum_val:int , ans:List[int],i:int):

            if(sum_val ==  target):
                result.append(ans.copy())
                return
            if(sum_val >target):
                return

            if(i >= len(nums)):
            
                return  
            ans.append(nums[i])

            recursive(sum_val + nums[i],ans,i)
            ans.pop()

            recursive(sum_val,ans,i+1)

        recursive(0,[],0)

        return result


        
        