class Solution:
    def twoSum(self,List, target):
        n = len(List)
        for a in range(n):
            for b in range(a+1,n):
                if List[a] + List[b] == target:
                    list = [a,b]
                    return list