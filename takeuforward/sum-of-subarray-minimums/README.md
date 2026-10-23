# [Sum of Subarray Minimums](https://takeuforward.org/practice/dsa/sum-of-subarray-minimums)

<p>Given an array of integers arr of size n, calculate the sum of the minimum value in each (contiguous) <strong>subarray</strong> of arr. Since the result may be large, return the answer modulo 10<sup>9</sup> +7.</p>

**Example 1**

<p>Input: arr = [3, 1, 2, 5]</p><p>Output: 18</p><p>Explanation: The minimum of subarrays: [3], [1], [2], [5], [3, 1], [1, 2], [2, 5], [3, 1, 2], [1, 2, 5], [3, 1, 2, 5] are 3, 1, 2, 5, 1, 1, 2, 1, 1, 1 respectively and their sum is 18.</p>

**Example 2**

<p>Input: arr = [2, 3, 1]</p><p>Output: 10</p><p>Explanation: The minimum of subarrays: [2], [3], [1], [2,3], [3,1], [2,3,1] are&nbsp;2, 3, 1, 2, 1, 1 respectively and their sum is 10.</p>

**Example 3**

<p>Input: arr = [11, 81, 94, 43, 3]</p>

**Constraints**

<ul><li>&nbsp;&nbsp;1 &lt;= arr.length &lt;= 10<sup>5</sup></li><li>&nbsp;&nbsp;1 &lt;= arr[i] &lt;= 10<sup>6</sup></li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [sum-of-subarray-minimums.cpp](sum-of-subarray-minimums.cpp) | C++ | 0.463 | 413.42 KiB | 131/131 | 2026-10-23 |
<!-- solvelogs:solutions:end -->
