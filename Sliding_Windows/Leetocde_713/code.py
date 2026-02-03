from typing import List

class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        l = len(nums)
        if (l == 0 or k == 0):
            return 0
        count = 0
        prod = 1
        left = 0 
        for right, x in enumerate(nums):
            prod *= x
            while (left <= right and prod >= k):
                prod //= nums[left]
                left += 1
            count += right - left + 1
    
        return count
    
if __name__ == "__main__":
    nums = [10,5,2,6]
    K = 10
    K1 = 100
    sol = Solution()
    print (f"No. of Subarrays having prod is less than  {K} is {sol.numSubarrayProductLessThanK(nums, K)}")  # expect 3
    print (f"No. of Subarrays having prod is less than  {K1} is {sol.numSubarrayProductLessThanK(nums, K1)}")  # expect 8
    
