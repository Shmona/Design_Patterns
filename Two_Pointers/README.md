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
**Used When:**
  
    Array is sorted
    You need to compare pairs
    Reversals

**Example Problems:**

1. Pair with target sum (sorted array)
2. Reverse array/string
3. Check palindrome
