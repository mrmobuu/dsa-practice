# [Binary Subarrays With Sum](https://takeuforward.org/practice/dsa/binary-subarrays-with-sum)

<p>Given a binary array nums and an integer goal. Return the <strong>number</strong> of <strong>non-empty subarrays </strong>with a sum goal.</p><p><br></p><p>A subarray is a continuous part of the array.</p>

**Example 1**

<p><strong>Input :</strong> nums = [1, 1, 0, 1, 0, 0, 1] , goal = 3</p><p><strong>Output :</strong> 4</p><p><strong>Explanation :</strong> The subarray with sum 3 are</p><p>[1, 1, 0, 1]</p><p>[1, 1, 0, 1, 0]</p><p>[1, 1, 0, 1, 0, 0]</p><p>[1, 0, 1, 0, 0, 1].</p>

**Example 2**

<p><strong>Input :</strong> nums = [0, 0, 0, 0, 1] , goal = 0</p><p><strong>Output :</strong> 10</p><p><strong>Explanation :</strong> Some of the subarray with sum 0 are</p><p>[0]</p><p>[0, 0]</p><p>[0, 0, 0]</p><p>[0, 0, 0, 0]</p>

**Example 3**

<p><strong>Input : </strong>nums = [1, 0, 1, 0, 1], goal = 2</p>

**Constraints**

<ul><li>1 &lt;= nums.length &lt;= 3*10<sup>4</sup></li><li>0 &lt;= goal &lt;= nums.length</li><li><em>nums</em> consist of only 0 and 1.</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [binary-subarrays-with-sum.cpp](binary-subarrays-with-sum.cpp) | C++ | 0.014 | 397.89 KiB | 113/113 | 2026-10-11 |
<!-- solvelogs:solutions:end -->
