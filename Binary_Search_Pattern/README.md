# Binary Search Pattern
- The Binary Search Pattern is a powerful algorithmic technique used to efficiently search or optimize over a monotonic search space.
- It reduces time complexity from linear O(n) to logarithmic O(log n) by repeatedly halving the search range.

## When to Use Binary Search
Use this pattern when at least one of the following is true:
- The data is sorted (array, list)
- The answer space is monotonic (True → True → False or vice‑versa)
- You are asked to find  **First or last occurrence, Minimum or maximum valid value, Smallest or largest possible answer**

## Core Idea

    Define a search space [low, high]
    Pick mid
    Decide which half to discard based on a condition
    Repeat until the answer is found
    Each step removes half the search space.

``` cpp

    while (low <= high)
    {
        mid = low + (high - low)/2;
        if condition(mid)
        {
            answer = mid
            high = mid - 1   # or low = mid + 1
        }
        else
            low = mid + 1    # or high = mid - 1
    }
```

## Types of Binary Search Pattern 

### 1. Classic Binary Search (Exact Match)
Purpose:   To find whether a target element exists in a sorted array.

Key property:
  - Array must be sorted
  - Stops when arr[mid] == target

Used for:
  - Element lookup
  - Membership checking

✅ Time: O(log n)

### 2. First Occurrence Binary Search
Purpose: To find the first index of a target in a sorted array with duplicates.

Key idea:
  - Even after finding target, continue searching left half
  - Condition: if arr[mid] == target, store answer and move high = mid - 1

Used for:
  - Counting frequency
  - Range queries

### 3. Last Occurrence Binary Search
Purpose: To find the last index of a target in a sorted array.

Key idea:
  - Even after finding target, continue searching right half
  - Condition: If arr[mid] == target, store answer and move low = mid + 1

### 4. Lower Bound Binary Search
Purpose: To find the first element ≥ target

Behavior:
  - Works even if target does not exist
  - Very common in competitive programming

### 5. Upper Bound Binary Search
Purpose: To find the first element > target


### 6. Binary Search on Answer (Parametric Search) -  Most important for interviews
Purpose: To search over a range of possible answers, not array indices.

Key requirement:
  - Answer space must be monotonic
  - False → False → True  or True → True → False

Structure:
  - Search space = possible answers
  - Use isPossible(mid) to decide direction

Examples:
  - Koko Eating Bananas
  - Minimum capacity to ship packages
  - Allocate minimum pages
  - Aggressive cows

### 7. Binary Search in Rotated Sorted Array
Purpose: To search in an array that was sorted, then rotated.

Key idea:
  - One half is always sorted
  - Decide which half to discard

Examples:
  - Search in Rotated Sorted Array
  - Find minimum in rotated array


### 8. Binary Search on Infinite / Unknown Size Array
Purpose: To search when array size is unknown or infinite.

Approach:
  - Expand search range exponentially
  - Apply classic binary search

Used in:
  - System design
  - External memory/streams

### 9. Binary Search on Floating Point/Precision
Purpose: To find approximate answers with precision (ε).

Used in:
  - Square root
  - Nth root
  - Geometry problems

Stopping condition: Difference < epsilon


### 10. Binary Search on Predicate / Condition
Purpose: To find boundary where condition changes.

Think as: “Find the first true or last false”

Examples:
  - First bad version
  - Capacity problems
  - Scheduling constraints


## Mistakes to Avoid 
- Infinite loops (low < high vs low <= high)
- Overflow using (low + high) / 2  
- Wrong boundary updates
- Applying binary search on non‑monotonic conditions
  
✅ Safe mid calculation:  mid = low + (high -  low) / 2 

## Leetcode Practice Questions 

### 🟢 Beginner / Warm-up
- **Leetcode 704** (Binary Search) : Classic exact match
- **Leetcode 278** (First Bad Version) : Binary search on predicate (true / false)
- **Leetcode 35** (Search Insert Position) : Lower bound
- **Leetcode 367** (Valid Perfect Square) : Binary search on answer
- **Leetcode 374** (Guess Number Higher or Lower) : Interactive binary search

### 🟡 Intermediate
- **Leetcode 33** (Search in Rotated Sorted Array)  : Rotated sorted array
- **Leetcode 81** (Search in Rotated Sorted Array II) : Rotated sorted array
- **Leetcode 153** (Find Minimum in Rotated Sorted Array) : Rotated sorted array
- **Leetcode 154** (Find Minimum in Rotated Sorted Array II) : Rotated sorted array
- **Leetcode 34** (Find First and Last Position of Element in Sorted Array)  : First / Last Occurrence
  
***(Extremely important : Binary Search on Answer )**
- **Leetcode 875** (Koko Eating Bananas)  : Binary Search on Answer
- **Leetcode 1011** (Capacity To Ship Packages Within D Days) : Binary Search on Answer
- **Leetcode 1482** (Minimum Number of Days to Make m Bouquets) : Binary Search on Answer
- **Leetcode 1283** (Find the Smallest Divisor Given a Threshold) : Binary Search on Answer
- **Leetcode 410** (Split Array Largest Sum) : Binary Search on Answer

- **Leetcode 74** (Search a 2D Matrix) :  Matrix Binary Search
- **Leetcode 240** (Search a 2D Matrix II) :  Matrix Binary Search

### 🔴 Advanced
- **Leetcode 4** (Median of Two Sorted Arrays)
- **Leetcode 774** (Minimize Max Distance to Gas Station (precision BS)
- **Leetcode 719** (Find K-th Smallest Pair Distance)
- **Leetcode 1231** (Divide Chocolate)
- **Leetcode 878** (Nth Magical Number)


### Special Binary Search Types
**✅ Lower / Upper Bound Practice**
- **Leetcode 1351** (Count Negative Numbers in a Sorted Matrix)
- **Leetcode 744** (Find Smallest Letter Greater Than Target)

**✅ Binary Search with Precision**
- **Leetcode 69** Sqrt(x)
- **Leetcode 50** Pow(x, n)


