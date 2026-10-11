# [Median of 2 sorted arrays](https://takeuforward.org/practice/dsa/median-of-2-sorted-arrays)

<p>Given two sorted arrays arr1 and arr2 of size m and n respectively, return the <strong>median</strong> of the two sorted arrays.</p><p><br></p><p>The median is defined as the middle value of a sorted list of numbers. In case the length of the list is even, the median is the average of the two middle elements.</p>

**Example 1**

<p>Input: arr1 = [2, 4, 6], arr2 = [1, 3, 5]</p><p>Output: 3.5</p><p>Explanation: The array after merging arr1 and arr2 will be [ 1, 2, 3, 4, 5, 6 ]. As the length of the merged list is even, the median is the average of the two middle elements. Here two medians are 3 and 4. So the median will be the average of 3 and 4, which is 3.5.</p>

**Example 2**

<p>Input: arr1 = [2, 4, 6], arr2 = [1, 3]</p><p>Output: 3.0</p><p>Explanation: The array after merging arr1 and arr2 will be [ 1, 2, 3, 4, 6 ]. The median is simply 3.</p>

**Example 3**

<p>Input: arr1 = [2, 4, 5], arr2 = [1, 6]</p>

**Constraints**

<ul><li>0 &lt;= m &lt;= 1000</li><li>0 &lt;= n &lt;= 1000</li><li>1 &lt;= m + n &lt;= 2000</li><li>-10<sup>6</sup> &lt;= arr1[i], arr2[i] &lt;= 10<sup>6</sup></li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [median-of-2-sorted-arrays.cpp](median-of-2-sorted-arrays.cpp) | C++ | 0.010 | 400.12 KiB | 129/129 | 2026-10-11 |
<!-- solvelogs:solutions:end -->
