# [3 Sum](https://takeuforward.org/practice/dsa/3-sum)

<p>Given an integer array <strong>nums</strong>. Return all triplets such that:</p><p><br></p><ul><li>i != j, i != k, and j != k</li></ul><p><br></p><ul><li>nums[i] + nums[j] + nums[k] == 0.</li></ul><p><br></p><p>Notice that the solution set must not contain duplicate triplets. One element can be a part of multiple triplets. The output and the triplets can be returned in any order.</p>

**Example 1**

<p><strong>Input</strong>: nums = [2, -2, 0, 3, -3, 5]</p><p><strong>Output</strong>: [[-2, 0, 2], [-3, -2, 5], [-3, 0, 3]]</p><p><strong>Explanation</strong>: </p><p>nums[1] + nums[2] + nums[0] = 0</p><p>nums[4] + nums[1] + nums[5] = 0</p><p>nums[4] + nums[2] + nums[3] = 0</p>

**Example 2**

<p><strong>Input</strong>: nums = [2, -1,&nbsp;-1, 3, -1]</p><p><strong>Output</strong>: [[-1, -1, 2]]</p><p><strong>Explanation</strong>: </p><p>nums[1] + nums[2] + nums[0] = 0</p><p>Note that we have used two -1s as they are separate elements with different indexes</p><p>But we have not used the -1 at index 4 as that would create a duplicate triplet</p>

**Example 3**

<p><strong>Input</strong>: nums = [8, -6, 5, 4]</p><p>(Give answer with the output and triplets sorted in ascending order)</p>

**Constraints**

<ul><li>1 &lt;= nums.length &lt;= 3000</li><li>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></li></ul>

---

## My latest accepted submission

| Language | Time | Memory | Tests passed |
|---|---|---|---|
| C++ | 0.209 | 427.24 KiB | 124/124 |
