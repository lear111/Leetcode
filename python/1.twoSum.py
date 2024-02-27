class Solution:
    def twoSum(self, nums, target):
        for i in range(len(nums)):
            a = target - nums[i]
            if a in nums[i + 1:]:
                return [i, nums[i + 1:].index(a) + i + 1]

if __name__ == '__main__':
    Input = Solution.twoSum(0, [2, 7, 11, 15], 18)
    print(Input)
