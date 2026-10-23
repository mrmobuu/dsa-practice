# [Sliding Window Maximum](https://takeuforward.org/practice/dsa/sliding-window-maximum)

<p>Given an array of integers arr, there is a sliding window of size<strong> k</strong> which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position. Return the <strong>max</strong> sliding window.</p>

**Example 1**

<p>Input: arr = [4, 0, -1, 3, 5, 3, 6, 8], k = 3</p><p>Output: [4, 3, 5, 5, 6, 8]</p><p>Explanation:&nbsp;</p><p><img src="https://static.takeuforward.org/content/1789481812_MbelfJDp.webp"></p><p>For each window of size k=3, we find the maximum element in the window and add it to our output array.</p>

**Example 2**

<p>Input: arr = [20, 25], k = 2</p><p>Output: [25]</p><p>Explanation: There’s just one window of size 2 that is possible and the maximum of the two elements is our answer.</p>

**Example 3**

<p>Input: arr = [1, 3, -1, -3, 5, 3, 6, 7],&nbsp;k = 3</p>

**Constraints**

<ul><li>1 &lt;= arr.length &lt;= 10<sup>5</sup></li><li>-10<sup>4</sup> &lt;= arr[i] &lt;= 10<sup>4</sup></li><li>1 &lt;= k &lt;= arr.length</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [sliding-window-maximum.cpp](sliding-window-maximum.cpp) | C++ | 0.196 | 415.09 KiB | 132/132 | 2026-10-23 |
<!-- solvelogs:solutions:end -->
