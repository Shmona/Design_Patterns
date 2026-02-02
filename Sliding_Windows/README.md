# Sliding Window Pattern

## Overview
- The Sliding Window technique is used to efficiently solve problems involving **contiguous subarrays or substrings** by maintaining a window that expands and shrinks based on constraints.
  
- Instead of recomputing results for every possible window (which leads to O(n²)), do the following:
    - Maintain a window [left, right]
    - Expand it to include new elements
    - Shrink it when constraints are violated
    - Update the answer incrementally
      
- It reduces time complexity from **O(n²)** to **O(n)** in many cases.

## When to Use Sliding Window (Key Observation)
- Use Sliding Window only if:
    -  The problem involves **contiguous elements**
    -  Window elements can be **added/removed incrementally**
    -  You are asked **for max / min / count / length(longest or shortest) / sum / over subarrays or substrings**
- Not suitable for subsequences or non‑contiguous selections
  
## Types of Sliding Window
### 1. Fixed-Size Sliding Window  :   Used when the window size is constant.
**Example problems:**
  1.  Maximum sum subarray of size K

``` cpp
int maxSumSubarray(vector<int>& a, int k)
{
    int windowSum = 0, maxSum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        windowSum += a[i];
        if (i >= k - 1)
        {
            maxSum = max(maxSum, windowSum);
            windowSum -= a[i - k + 1];
        }
    }
    return maxSum;
}
```
2.  Average of K elements
   ``` cpp
    vector<double> averagesOfK(const vector<int>& nums, int K)
    {
        int n = (int)nums.size();
        if (K <= 0 || K > n)
            return {};
    
        vector<double> ans;
        ans.reserve(n - K + 1);
    
        long long windowSum = 0; // use 64-bit to avoid overflow
        for (int i = 0; i < n; ++i)
        {
            windowSum += nums[i];
            if (i >= K) {
                windowSum -= nums[i - K]; // remove the element leaving the window
            }
            if (i >= K - 1) {
                ans.push_back( (double)windowSum / K );
            }
        }
        return ans;
    }
``` 
4.  Maximum in each window of size K
``` cpp
  vector<int> maxSlidingWindow(const vector<int>& a, int K)
  {
      int n = a.size();
      if (K <= 0 || K > n)
            return {};

      deque<int> dq;
      vector<int> ans;
      ans.reserve(n-K+1);

      for (int i = 0; i < n; ++i)
      {
          while (!dq.empty() && a[dq.back()] <= a[i])
                dq.pop_back();
          dq.push_back(i);
          if (dq.front() <= i - K)
              dq.pop_front();
          if (i >= K - 1)
              ans.push_back(a[dq.front()]);
      }
      return ans;
  }
```


### 2. Variable-Size Sliding Window :   Used when the window size depends on a condition.
**Example problems:**
1.  Longest substring with at most K distinct characters

``` cpp
     int longestSubstringKDistinct(string s, int k)
    {
        unordered_map<char,int> freq;
        int left = 0, ans = 0;
        for (int right = 0; right < s.size(); right++)
        {
            freq[s[right]]++;
            while (freq.size() > k)
            {
                freq[s[left]]--;
                if (freq[s[left]] == 0)
                    freq.erase(s[left]);
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
  }
```
3.  Minimum window substring
   ``` cpp
    string minWindow_map(const string& s, const string& t)
    {
        if (t.empty() || s.size() < t.size())
            return "";
    
        unordered_map<char,int> map;
        for (char c : t)
            map[c]++;
    
        int requiredDistinct = (int)map.size();
        unordered_map<char,int> win;
        int formed = 0;
        int bestLen = INT_MAX, bestL = 0;
    
        for (int l = 0, r = 0; r < (int)s.size(); ++r)
        {
            char c = s[r];
            win[c]++;
            if (map.count(c) && win[c] == map[c])
                ++formed;
            while (formed == requiredDistinct && l <= r)
            {
                if (r - l + 1 < bestLen)
                {
                    bestLen = r - l + 1;
                    bestL = l;
                }  
                char d = s[l++];
                if (map.count(d) && win[d] == map[d])
                    --formed;
                --win[d];
            }
        }
        return (bestLen == INT_MAX) ? "" : s.substr(bestL, bestLen);
    }
``` 
5.  Smallest subarray with sum ≥ target
   ``` cpp
    // Assumes nums[i] >= 0. If no such subarray exists, returns 0.
    int minSubArrayLen(int target, const vector<int>& nums) {
        int n = (int)nums.size();
        int left = 0, best = INT_MAX;
        long long sum = 0;
        for (int right = 0; right < n; ++right) {
            sum += nums[right];
    
            while (sum >= target) {
                best = min(best, right - left + 1);
                sum -= nums[left++];
            }
        }
        return (best == INT_MAX) ? 0 : best;
    }
```

# Mistakes to Avoid :
- Using sliding window for non-contiguous problems
- Forgetting to shrink the window
- Applying it when negative numbers exist (use prefix sum instead)

## Leetcode Questions for Practice :
**🟢 Beginner / Warm-up**

- **Leecode 643** (Maximum Average Subarray I )  :  Fixed-size window average/sum.
- **Leecode 713** (Subarray Product Less Than K ) :  Variable window, product constraint (>0 nums).
- **Leecode 3** (Longest Substring Without Repeating Characters) :  Classic variable window with set/map.
- **Leecode 567** (Permutation in String )  :  Fixed-size window with counts (anagram check).
- **Leecode 209** (Minimum Size Subarray Sum ) : Shrink while sum ≥ target.
- **Leecode 121** (Best Time to Buy and Sell Stock ) : Not a classic window but single pass min-so-far; good warm-up.

**🟡 Intermediate**

- **Leecode 904** (Fruit Into Baskets ) : Longest subarray with at most 2 types.
- **Leecode 424** (Longest Repeating Character Replacement ) : Window with max_freq trick.
- **Leecode 1004** (Max Consecutive Ones III ) : At most K zero flips → same as (424).
- **Leecode 930** (Binary Subarrays With Sum ) : “At most K” counts and transform to exactly K.
- **Leecode 1248** (Count Number of Nice Subarrays) : Exactly K odd numbers via at-most trick.
- **Leecode 438** (Find All Anagrams in a String ) – Sliding counts; compare or track matches.
- **Leecode 1052** (Grumpy Bookstore Owner) – Fixed window to add “saved” customer block.
- **Leecode 340** (Longest Substring with At Most K Distinct Characters) – Map size ≤ K.

**🔴 Advanced**

- **Leecode 76** (Minimum Window Substring ) : Window must cover required frequencies; track need vs have.
- **Leecode 239** (Sliding Window Maximum) : Not two-pointer; use monotonic deque for O(n).
- **Leecode 159** (Longest Substring with At Most Two Distinct Characters )  : Variant of (Leecode 340).
- **Leecode 30** (Substring with Concatenation of All Words ) : Fixed stride windows over word length.
- **Leecode 632** (Smallest Range Covering Elements from K Lists ) : Heap + window over merged streams (window conceptually over values).
- **Leecode 727** (Minimum Window Subsequence ) : Two passes; not pure typical window, but related.
- **Leecode 1838** (Frequency of the Most Frequent Element) : Sort + sliding prefix sum to check feasibility.
