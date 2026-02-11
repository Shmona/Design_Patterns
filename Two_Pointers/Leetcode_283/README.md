# Problem Statement 

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

**Example 1:**

    Input: nums = [0,1,0,3,12]
    Output: [1,3,12,0,0]

**Example 2:**

    Input: nums = [0]
    Output: [0]
 
## Constraints:

- 1 <= nums.length <= 10^4
- -2^31 <= nums[i] <= 2^31 - 1
 

    Follow up: Could you minimize the total number of operations done?
## Approach 

## Using Overwrite and fill based two-pointer

- Traverse the array from left to right i=> 0 to n-1 
- maintain a pointer k => 0 where you need to put the non-zero values
- if nums[i] != 0  => put it in kth index and increment the pointer k
- Now fill the required zeros from (k to n-1)

## Using swap-based two‑pointer

- Traverse the array from left to right i=> 0 to n-1 
- maintain a pointer k => 0 where you need to put the non-zero values
- if nums[i] != 0 :
  
       => swap the values of kth index with ith index only if i != k
       => increment the pointer k


