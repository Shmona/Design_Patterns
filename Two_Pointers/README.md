# Two Pointer Patterns

## Overview 
- Two Pointer Pattern uses two indices (pointers) to iterate over a data structure (usually an array or string) simultaneously, instead of using nested loops.
-  It drastically reduces time complexity from O(n²) → O(n).

## When to Use ( Key Observation)
- The data is sorted (or can be sorted)
  - Pair / triplet sum problems
  - Minimize/maximize a value using pairs
 
- You need to compare elements from both ends
  - Symmetry-based problems
  - Reversal checks
 
- You need to remove or skip elements in-place
    - Modify array without extra space
      
- You are tracking relative movement
    - One pointer depends on the other

- The problem asks for constant space  “Solve without using extra space”

### NOTE : Clues in problem statement:

    Sorted array
    Pair / triplet
    Palindrome
    Reverse / swap
    Remove duplicates
    Constant extra space required

## Types of Two Pointer Techniques
### 1. Opposite Direction Pointers :  One pointer starts from beginning, one from end

**Example Problems:**

1. Pair with target sum (sorted array)
2. Reverse array/string
3. Check palindrome

### Same Direction Pointers :  Both pointers move forward

**Example Problems:**

1. Remove duplicates from sorted array
2. Move zeros to end
3. Detect cycle (fast & slow pointer)

### Fast & Slow Pointer (Tortoise–Hare)   :  One pointer moves faster than the other

**Example Problems:**

1. Detect cycle in linked list
2. Find middle element

# Mistakes to Avoid 

- Using two pointers on unsorted arrays without sorting
- Infinite loops (forgetting pointer movement)
- Off-by-one errors
- Modifying input when not allowed

## Leetcode Questions for Practice
**🟢  Beginner / Warm-up**
- **Leetcode 125** (Valid Palindrome)  :  Compare from both ends
- **Leetcode 344** (Reverse String) : Classic start–end pointer
- **Leetcode 977** (Squares of a Sorted Array) :  Merge‑like two pointer logic
- **Leetcode 167** (Two Sum II) : Input Array Is Sorted
- **Leetcode 283** (Move Zeroes) : Same‑direction pointers
- **Leetcode 26** (Remove Duplicates from Sorted Array) : Slow–fast pointer pattern

**🟡 Intermediate**
- **Leetcode 15** (3Sum) : Two pointers inside a loop
- **Leetcode 11** (Container With Most Water) :  Maximize area using left/right
- **Leetcode 16** (3Sum Closest) : Precision pointer movement
- **Leetcode 80** (Remove Duplicates from Sorted Array II) : Controlled skipping
- **Leetcode 75** (Sort Colors) : Three‑pointer variation (**Dutch Flag**)
- **Leetcode 18** (4Sum) : Multi‑level two pointers
- **Leetcode 881** (Boats to Save People) : Greedy + two pointers

**🔴 Advanced**
- **Leetcode 42** (Trapping Rain Water) : Two pointers + max tracking
- **Leetcode 76** (Minimum Window Substring) : Hybrid: Sliding Window + pointers
- **Leetcode 84** (Largest Rectangle in Histogram) : Stack + pointer intuition





