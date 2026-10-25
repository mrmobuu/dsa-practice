# [Detect a cycle in a directed graph](https://takeuforward.org/practice/dsa/detect-a-cycle-in-a-directed-graph)

<p>Given a <strong>directed</strong> graph with V vertices labeled from 0 to V-1. The graph is represented using an adjacency list where adj[i] lists all nodes connected to node. Determine if the graph contains any <strong>cycles</strong>.</p>

**Example 1**

<p>Input:&nbsp;V = 6, adj= [ [1], [2, 5], [3], [4], [1], [ ] ]</p><p><br></p><p><img src="https://static.takeuforward.org/content/ProblemSetter-Do8SOPHS"></p><p><br></p><p>Output: True</p><p><br></p><p>Explanation: The graph contains a cycle: 1 -&gt; 2 -&gt; 3 -&gt; 4 -&gt; 1.</p>

**Example 2**

<p>Input:&nbsp;V = 4, adj= [[1,2], [2], [], [0,2]]</p><p><br></p><p>Output: False</p><p><br></p><p>Explanation: The graph does not contain a cycle.</p>

**Example 3**

<p>Input:&nbsp;V = 3, adj= [[1], [2], [0]]</p>

**Constraints**

<ul><li>1 &lt;= V &lt;= 10^4</li><li>adj.size() == V</li><li>0 &lt;= adj[i][j] &lt; V</li><li>1 &lt;= sum(adj[i].size()) &lt;= 10<sup>4</sup></li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [detect-a-cycle-in-a-directed-graph.cpp](detect-a-cycle-in-a-directed-graph.cpp) | C++ | 0.022 | 413.41 KiB | 114/114 | 2026-10-25 |
<!-- solvelogs:solutions:end -->
