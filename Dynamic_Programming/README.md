# Dynamic Programming (DP)
- Dynamic Programming (DP) is an optimization technique used to solve problems by:
  -  Breaking them into overlapping subproblems
  -  Solving each subproblem once
  -  Storing results to avoid recomputation

        DP = Recursion + Memoization (or Iteration + Table)

## When to use
- A problem is suitable for DP iff it satisfies both conditions:

**1️⃣ Overlapping Subproblems**
Same subproblems are solved repeatedly.

Example:

  - fib(n) → fib(n-1) + fib(n-2)
  - fib(n-2) is computed multiple times ❌

**2️⃣ Optimal Substructure**
Optimal solution of the whole problem depends on optimal solutions of subproblems.

Example:

  - Longest Increasing Subsequence
  - Shortest path problems
  - Knapsack

✅ If both exist → DP

## Top‑Down vs Bottom‑Up
**✅ Top‑Down (Memoization)**
- Recursive
- Cache results

**Pros**
- Easy to write
- Intuitive

**Cons**
- Recursive stack overhead
  
**✅ Bottom‑Up (Tabulation)**
- Iterative
- Build from base cases

**Pros**
- Faster
- No recursion

**Cons**
- Must design order carefully
  
# Mistakes to avoid ❌

- Wrong state definition
- Missing base cases
- Index out of bounds
- Using DP when greedy works
- Overcomplicating recursion
