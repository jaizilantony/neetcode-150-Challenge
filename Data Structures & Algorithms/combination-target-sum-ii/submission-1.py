class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        result = []

        candidates.sort()

        def recursive(i: int, temp: list[int], sum_val: int):

            if sum_val == target:
                result.append(temp.copy())
                return

            if i >= len(candidates) or sum_val > target:
                return

            
            temp.append(candidates[i])

            recursive(i + 1, temp, sum_val + candidates[i])

            temp.pop()

            
            j = i + 1
            while j < len(candidates) and candidates[j] == candidates[i]:
                j += 1

            recursive(j, temp, sum_val)

        recursive(0, [], 0)

        return result