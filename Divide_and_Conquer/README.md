# Divide and Conquer

## Overview
- Divide and Conquer is a fundamental algorithmic paradigm that solves a problem by:
    - Dividing it into smaller subproblems of the same type
    - Conquering (solving) each subproblem recursively
    - Combining the solutions of subproblems to get the final result

- It is widely used in **sorting, searching, recursion, and computational geometry problems**.

## When to Use Divide and Conquer (Key Observation)
Use this approach when:
- The problem can be broken into independent subproblems
- Subproblems are similar to the original problem
- Combining solutions is efficient
- A recursive solution is natural

## When NOT to Use
Avoid Divide and Conquer when:
- Subproblems overlap heavily → Dynamic Programming is better
- Combining solutions is very expensive
- The problem is already small or linear

## Types of Divide and Conquer

### 1. Binary Divide and Conquer 
- The problem is divided into two equal or nearly equal halves.
- Each half is solved recursively.
- Results are combined.

  **Examples**
  1. Binary Search
  2. Merge Sort
  3. Quick Sort (conceptually binary)

### 2. Multi‑way Divide and Conquer
- The problem is divided into more than two subproblems.
- Each subproblem is smaller and independent.
- Combine all results
  
  **Examples**
  1. Strassen’s Matrix Multiplication (7 subproblems)
  2. Karatsuba Multiplication (3 subproblems)
  3. Ternary Search (3-way split)
  4. Tournament Method (finding max/min)

### 3. Decrease and Conquer
- problem is reduced to a single smaller subproblem, not multiple.
- Solve the smaller instance and extend the solution.

  **Examples**
  1. Binary Search
  2. Insertion Sort (recursive)
  3. Euclid’s GCD algorithm

### 4. Divide, Solve Independently, No Combine
- Subproblems are solved independently.
- No merging or combining step required.

  **Examples**
  1. Quick Sort (partition logic dominates)
  2. Counting Inversions (conceptual variants)

### 5. Divide and Conquer with Merge/Combine Step
- After solving subproblems, results must be merged.

  **Examples**
  1. Merge Sort
  2. Maximum Subarray (divide & conquer version)
  3. Closest Pair of Points
 
### 6. Randomized Divide and Conquer**
- Uses random choices while dividing to improve average performance.

  **Examples**
  1. Randomized Quick Sort
  2. Randomized Selection (Quickselect)
 
##  Leetcode Questions for Practice
**🟢  Beginner / Warm-up**
- **Leetcode 704** (Binary Search) : Classic divide array into halves
- **Leetcode 169** (Majority Element) : D&C recurrence (majority in halves + combine)
- **Leetcode 108** (Convert Sorted Array to Binary Search Tree) : Divide array, choose mid as root
- **Leetcode 53** (Maximum Subarray (Divide & Conquer version)) : Left max, right max, crossing sum

**🟡 Intermediate**
- **Leetcode 215** (Kth Largest Element in an Array) : Quickselect (divide + partition)
- **Leetcode 912** (Sort an Array) : Implement Merge Sort / Quick Sort
- **Leetcode 240** (Search a 2D Matrix II) : Reduce search space
- **Leetcode 241** (Different Ways to Add Parentheses) : split expression at operators (D&C + memoization)
- **Leetcode 148** (Sort List) : Merge Sort on Linked List

**🔴 Advanced**
- **Leetcode 23** (Merge k Sorted Lists) : Divide lists, merge recursively
- **Leetcode 4** (Median of Two Sorted Arrays) : Binary divide on partitions
- **Leetcode 315** (Count of Smaller Numbers After Self) : Merge sort based counting
- **Leetcode 327** (Count of Range Sum) : merge sort + prefix sums
- **Leetcode 312** (Burst Balloons) : often DP, but can be framed as D&C + memoization

    

