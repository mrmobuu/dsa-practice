# [Course Schedule II](https://takeuforward.org/practice/dsa/course-schedule-ii)

<p>There are a total of N tasks, labeled from 0 to N-1. Given an array arr where arr[i] = [a, b] indicates that you must take course <strong>b</strong> first if you want to take course<strong> a. </strong>Find the <strong>order of tasks</strong> you should pick to finish all tasks.</p><p>If no such ordering exists, return an empty array.</p><p>Since multiple valid answers are possible, you can return any answer.</p><p><br></p><p>Note : The output visible will be 1 if your solution is correct, otherwise -1.</p>

**Example 1**

<p><strong>Input:</strong> N = 4,&nbsp;arr = [[1,0],[2,1],[3,2]]</p><p><strong>Output:</strong> [0, 1, 2, 3]</p><p><strong>Explanation:</strong> First,finish task 0, as it has no prerequisites. Then,finish task 1, since it depends only on task 0. After that,finish task 2, since it depends only on task 1. Finally,finish task 3, since it depends only on task 2</p>

**Example 2**

<p><strong>Input:</strong> N = 4,&nbsp;arr = [[0,1],[3,2],[1,3],[3,0]]</p><p><strong>Output:</strong> []</p><p><strong>Explanation:</strong> It is impossible to finish all the tasks. Let’s analyze the pairs:</p><p>For pair <strong>{0, 1}</strong> → we need to finish task 1 first and then task 0 (order: 1 → 0).</p><p>For pair <strong>{3, 2}</strong> → we need to finish task 2 first and then task 3 (order: 2 → 3).</p><p>For pair <strong>{1, 3}</strong> → we need to finish task 3 first and then task 1 (order: 2 → 3 → 1 → 0).</p><p>But for pair <strong>{3, 0}</strong> → we need to finish task 0 first and then task 3, which contradicts the previous order. So, it is not possible to finish all the tasks.</p>

**Example 3**

<p><strong>Input:</strong> N = 2, arr = [[1,0]]</p>

**Constraints**

<ul><li>&nbsp;&nbsp;1 &lt;= N &lt;= 2000</li><li>&nbsp;&nbsp;0 &lt;= arr.length &lt;= 5000</li><li>&nbsp;&nbsp;arr[i].length == 2</li><li>&nbsp;&nbsp;0 &lt;= arr[i][0], arr[i][1] &lt; N</li><li>&nbsp;&nbsp;All the pairs arr[i] are unique.</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [course-schedule-ii.cpp](course-schedule-ii.cpp) | C++ | 0.033 | 437.45 KiB | 114/114 | 2026-10-25 |
<!-- solvelogs:solutions:end -->
