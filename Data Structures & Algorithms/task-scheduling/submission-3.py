class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:

        count = [0] * 26

        for task in tasks:
            count[ord(task) - ord("A")] += 1
        count.sort()
        print(count)
        maxf = count[25]
        idle = (maxf - 1) * n
        print(f"idle = {idle}")
        for i in range(24, -1, -1):
            idle -= min(maxf - 1, count[i])
        print(f"idle = {idle}")
        print(max(0, idle) + len(tasks))
        return max(0, idle) + len(tasks)
