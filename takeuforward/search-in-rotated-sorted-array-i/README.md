# [Search in rotated sorted array-I](https://takeuforward.org/practice/dsa/search-in-rotated-sorted-array-i)

<p>Given an integer array nums, sorted in ascending order (with distinct values) and a target value k. The array is <strong>rotated</strong> at some pivot point that is unknown. Find the <strong>index</strong> at which k is present and if k is not present return -1.</p>

**Example 1**

<p>Input : nums = [4, 5, 6, 7, 0, 1, 2], k = 0</p><p>Output: 4</p><p>Explanation: Here, the target is 0. We can see that 0 is present in the given rotated sorted array, nums. Thus, we get output as 4, which is the index at which 0 is present in the array.</p>

**Example 2**

<p>Input: nums = [4, 5, 6, 7, 0, 1, 2], k = 3</p><p>Output: -1</p><p>Explanation: Here, the target is 3. Since 3 is not present in the given rotated sorted array. Thus, we get the output as -1.</p>

**Example 3**

<p>Input: nums = [4, 5, 6, 7, 0, 1, 2], k = 5</p>

**Constraints**

<ul><li>&nbsp;&nbsp;1 &lt;= nums.length &lt;= 10<sup>4</sup></li><li>&nbsp;&nbsp;-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></li><li>&nbsp;&nbsp;All values of nums are unique.</li><li>&nbsp;&nbsp;nums is an ascending array that is possibly rotated.</li><li>&nbsp;&nbsp;-10<sup>4</sup> &lt;= k &lt;= 10<sup>4</sup></li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [search-in-rotated-sorted-array-i.cpp](search-in-rotated-sorted-array-i.cpp) | C++ | 0.011 | 397.57 KiB | 144/144 | 2026-10-11 |
<!-- solvelogs:solutions:end -->
