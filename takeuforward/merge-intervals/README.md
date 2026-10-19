# [Merge Intervals](https://takeuforward.org/practice/dsa/merge-intervals)

<p>You are given an array intervals where intervals[i] = [startᵢ, endᵢ] represents the inclusive interval startᵢ ≤ x ≤ endᵢ.</p><p><br></p><p>Your task is to merge every pair of intervals that overlap and return all the non-overlapping intervals that completely cover the same ranges as the original array.</p><p>Two intervals overlap if they share at least one common point (i.e. start₂ ≤ end₁ and start₁ ≤ end₂).</p><p><br></p><p>Return the merged intervals in any order.</p>

**Example 1**

<p><strong>Input:&nbsp;</strong>intervals = [[1,3],[2,6],[8,10],[15,18]]</p><p><strong>Output:</strong> [[1,6],[8,10],[15,18]]</p><p><strong>Explanation: </strong>[1,3] and [2,6] overlap --&gt; merge to [1,6].</p>

**Example 2**

<p><strong>Input:</strong>&nbsp;intervals = [[1,4],[4,5]]</p><p><strong>Output:</strong> [[1,5]]</p><p><strong>Explanation:</strong> Because the end of [1,4] equals the start of [4,5], they are considered overlapping.</p>

**Example 3**

<p><strong>Input:</strong>&nbsp;intervals = [[1,4],[5,6]]</p>

**Constraints**

<ul><li>1 ≤ intervals.length ≤ 10⁴</li><li>intervals[i].length == 2</li><li>0 ≤ startᵢ ≤ endᵢ ≤ 10⁴</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [merge-intervals.cpp](merge-intervals.cpp) | C++ | 0.148 | 424.68 KiB | 449/449 | 2026-10-19 |
<!-- solvelogs:solutions:end -->
