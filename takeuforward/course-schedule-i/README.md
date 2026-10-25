# [Course Schedule I](https://takeuforward.org/practice/dsa/course-schedule-i)

<p>There are a total of N tasks, labeled from 0 to N-1. Given an array arr where arr[i] = [a, b] indicates that you must take course <strong>b</strong> first if you want to take course <strong>a</strong>. Find if it is possible to <strong>finish</strong> all tasks.</p>

**Example 1**

<p><strong>Input</strong>: N = 4,&nbsp;arr = [[1,0],[2,1],[3,2]]</p><p><br></p><p><strong>Output:</strong> True</p><p><br></p><p><strong>Explanation:</strong> It is possible to finish all the tasks in the order : 0 1 2 3.</p><p>First, we will finish task 0. Then we will finish task 1, task 2, and task 3.</p>

**Example 2**

<p><strong>Input:</strong> N = 4,&nbsp;arr = [[0,1],[3,2],[1,3],[3,0]]</p><p><br></p><p><strong>Output:</strong> False</p><p><br></p><p><strong>Explanation:</strong> It is impossible to finish all the tasks. Let’s analyze the pairs:</p><p>For pair {0, 1} -&gt; we need to finish task 1 first and then task 0. (order : 1 0).</p><p>For pair{3, 2} -&gt; we need to finish task 2 first and then task 3. (order: 2 3).</p><p>For pair {1, 3} -&gt; we need to finish task 3 first and then task 1. (order: 3 1).</p><p>But for pair {3, 0} -&gt; we need to finish task 0 first and then task 3 but task 0 requires task 1 and task 1 requires task 3. So, it is not possible to finish all the tasks.</p>

**Example 3**

<p><strong>Input:</strong> N = 2, arr = [[1,0]]</p>

**Constraints**

<ul><li>&nbsp;&nbsp;1 &lt;= N &lt;= 2000</li><li>&nbsp;&nbsp;0 &lt;= arr.length &lt;= 5000</li><li>&nbsp;&nbsp;arr[i].length == 2</li><li>&nbsp;&nbsp;0 &lt;= arr[i][0], arr[i][1] &lt; N</li><li>&nbsp;&nbsp;All the pairs arr[i] are unique.</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [course-schedule-i.cpp](course-schedule-i.cpp) | C++ | 0.029 | 425.56 KiB | 105/105 | 2026-10-25 |
<!-- solvelogs:solutions:end -->
