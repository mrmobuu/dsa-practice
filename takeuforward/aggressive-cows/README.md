# [Aggressive Cows](https://takeuforward.org/practice/dsa/aggressive-cows)

<p>Given an array nums of size n, which denotes the positions of stalls, and an integer k, which denotes the number of aggressive cows, assign stalls to k cows such that the <strong>minimum</strong> <strong>distance</strong> between any two cows is the <strong>maximum possible</strong>. Find the maximum possible minimum distance.</p>

**Example 1**

<p>Input: n = 6, k = 4, nums = [0, 3, 4, 7, 10, 9]</p><p>Output: 3</p><p>Explanation: </p><p>The maximum possible minimum distance between any two cows will be 3 when 4 cows are placed at positions [0, 3, 7, 10]. Here the distances between cows are 3, 4, and 3 respectively. </p><p>In no manner can we increase the minimum distance beyond 3.</p>

**Example 2**

<p>Input : n = 5, k = 2, nums = [4, 2, 1, 3, 6]</p><p>Output: 5</p><p>Explanation: The maximum possible minimum distance between any two cows will be 5 when 2 cows are placed at positions [1, 6].&nbsp;</p>

**Example 3**

<p>Input : n = 5, k = 3, nums = [10, 1, 2, 7, 5]</p>

**Constraints**

<ul><li>&nbsp;&nbsp;2 &lt;= n &lt;= 10<sup>5</sup></li><li>&nbsp;&nbsp;2 &lt;= k &lt;= n</li><li>&nbsp;&nbsp;0 &lt;= nums[i] &lt;= 10<sup>9</sup></li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [aggressive-cows.cpp](aggressive-cows.cpp) | C++ | 0.282 | 404.80 KiB | 133/133 | 2026-10-11 |
<!-- solvelogs:solutions:end -->
