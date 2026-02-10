# Problem statement
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

**Example 1:**

    Input: nums = [-4,-1,0,3,10]
    Output: [0,1,9,16,100]
    Explanation: After squaring, the array becomes [16,1,0,9,100].
    After sorting, it becomes [0,1,9,16,100].

**Example 2:**

    Input: nums = [-7,-3,2,3,11]
    Output: [4,9,9,49,121]
    

## Constraints:
- 1 <= nums.length <= 10^4
- -10^4 <= nums[i] <= 10^4
- nums is sorted in non-decreasing order.
    
    Follow up: Squaring each element and sorting the new array is very trivial, could you find an O(n) solution using a different approach?

## Approach
- Maintain two pointers pointing to extremes left => 0 and right => n - 1 and pointer pointing to resultant array's right extremen k => n-1
- Traverse the array from both end and keep comapring the abs(left element)  and abs( right element)
    - if abs(left element) <  abs( right element)
      
          => implies that right's sqaure also be greater than left's square
          => place right's sqaure in res[k++]
          => move the right pointer (right--) as nums[right]  been processed
      
    - else
       
          => implies that left's sqaure is greater than right's square
          => place left's sqaure in res[k++]
          => move the left pointer (left++)  as nums[left]  been processed 
