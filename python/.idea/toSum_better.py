class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for idx, num in enumerate(nums):
            nums[idx] = None   # 将当前访问的数字替换为None，防止出现找到相同位置的元素的情况发生
            if target - num in nums:
                return idx, nums.index(target-num)
            nums[idx] = num    # 替换位原来值，保证下次迭代数组的正确性