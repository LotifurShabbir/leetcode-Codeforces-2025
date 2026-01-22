class Solution:
    def minimumPairRemoval(self, nums):
        def fun(arr):
            for i in range(1, len(arr)):
                if arr[i] < arr[i - 1]:
                    return False
            return True

        ans = 0

        while not fun(nums):
            min_sum = nums[0] + nums[1]
            idx = 0

            for i in range(1, len(nums) - 1):
                curr_sum = nums[i] + nums[i + 1]
                if curr_sum < min_sum:
                    min_sum = curr_sum
                    idx = i

            nums[idx] = min_sum
            nums.pop(idx + 1)
            ans += 1

        return ans
