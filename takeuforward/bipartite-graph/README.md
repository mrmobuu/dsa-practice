# [Bipartite graph](https://takeuforward.org/practice/dsa/bipartite-graph)

<p>Given an undirected graph with V vertices labeled from 0 to V-1.&nbsp;The graph is represented using an 2D vector <strong>edges </strong>,where edges[i] represent an undirected edge between edges[i][0] and edges[i][1]. Determine if the graph is <strong>bipartite</strong> or not.</p><p><br></p><p>A graph is bipartite if the nodes can be partitioned into two independent sets A and B such that every edge in the graph connects a node in set A and a node in set B.</p>

**Example 1**

<p><strong>Input:</strong> V=4, edges = [ [0, 1], [0, 3], [1, 2], [2, 3] ]</p><p><strong><img src="https://static.takeuforward.org/content/1788102839_cn1GtlYi.webp">Output:</strong> True</p><p><strong>Explanation:</strong> The given graph is bipartite since, we can partition the nodes into two sets: {0, 2} and {1, 3}.</p>

**Example 2**

<p><strong>Input:</strong> V=4, edges = [ [0, 1], [0, 2], [0, 3], [2, 1], [3, 2] ]</p><p><strong>Output:</strong> False</p><p><strong>Explanation:</strong> The graph is not bipartite. If we attempt to partition the nodes into two sets, we encounter an edge that connects two nodes within the same set, which violates the bipartite property.</p>

**Example 3**

<p><strong>Input:</strong> V=5, edges = [ [0, 1], [0, 3], [1, 2], [2, 4], [4, 3] ]</p>

**Constraints**

<ul><li><span style="background-color: var(--background); color: var(--text-color);">E=number of edges</span></li><li><span style="background-color: var(--background); color: var(--text-color);">1 ≤ V, E ≤ 10</span><sup style="background-color: var(--background); color: var(--text-color);">4</sup></li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [bipartite-graph.cpp](bipartite-graph.cpp) | C++ | 0.035 | 433.67 KiB | 116/116 | 2026-10-25 |
<!-- solvelogs:solutions:end -->
