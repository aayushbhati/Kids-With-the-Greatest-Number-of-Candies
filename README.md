# Kids With the Greatest Number of Candies

## Problem Description

There are `n` kids with candies. You are given an integer array `candies`, where each `candies[i]` represents the number of candies the `i-th` kid has, and an integer `extraCandies`, denoting the number of extra candies that you have.

Return a boolean array `result` of length `n`, where `result[i]` is `true` if, after giving the `i-th` kid **all** the `extraCandies`, they will have the greatest number of candies among all the kids, or `false` otherwise.

Note that multiple kids can have the greatest number of candies.

## Examples

### Example 1:
**Input:**  
`candies = [2,3,5,1,3]`  
`extraCandies = 3`  
**Output:**  
`[true, true, true, false, true]`  

**Explanation:**  
If you give all extraCandies to:
- Kid 1: 2 + 3 = 5 (greatest)
- Kid 2: 3 + 3 = 6 (greatest)
- Kid 3: 5 + 3 = 8 (greatest)
- Kid 4: 1 + 3 = 4 (not greatest)
- Kid 5: 3 + 3 = 6 (greatest)

---

### Example 2:
**Input:**  
`candies = [4,2,1,1,2]`  
`extraCandies = 1`  
**Output:**  
`[true, false, false, false, false]`  

---

### Example 3:
**Input:**  
`candies = [12,1,12]`  
`extraCandies = 10`  
**Output:**  
`[true, false, true]`  

---

## Constraints
- `n == candies.length`
- `2 <= n <= 100`
- `1 <= candies[i] <= 100`
- `1 <= extraCandies <= 50`
