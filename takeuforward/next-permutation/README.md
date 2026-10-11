# [Next Permutation](https://takeuforward.org/practice/dsa/next-permutation)

<p>A permutation of an array of integers is an arrangement of its members into a sequence or linear order.</p><p><br></p><p>For example, for arr = [1,2,3], the following are all the permutations of arr:</p><p>[1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1].</p><p><br></p><p>The next permutation of an array of integers is the next lexicographically greater permutation of its integers.</p><p>More formally, if all the permutations of the array are sorted in lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted order.</p><p><br></p><p>If such arrangement is not possible (i.e., the array is the last permutation), then rearrange it to the lowest possible order (i.e., sorted in ascending order).</p><p><br></p><p>You must rearrange the numbers in-place and use only constant extra memory.</p>

**Example 1**

<p><strong>Input:</strong> nums = [1,2,3]</p><p><strong>Output:</strong> [1,3,2]</p><p><strong>Explanation:</strong> </p><p>The next permutation of [1,2,3] is [1,3,2].</p>

**Example 2**

<p><strong>Input:</strong> nums = [3,2,1]</p><p><strong>Output:</strong> [1,2,3]</p><p><strong>Explanation: </strong></p><p>[3,2,1] is the last permutation. So we return the first: [1,2,3].</p>

**Example 3**

<p><strong>Input:</strong> nums = [1,1,5]</p>

**Constraints**

<ul><li>1 &lt;= nums.length &lt;= 100</li><li>0 &lt;= nums[i] &lt;= 100</li></ul>

---

## My latest accepted submission

| Language | Time | Memory | Tests passed |
|---|---|---|---|
| C++ | 0.015 | 404.99 KiB | 315/315 |
