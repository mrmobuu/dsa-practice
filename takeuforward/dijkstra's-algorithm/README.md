# [Dijkstra's algorithm](https://takeuforward.org/practice/dsa/dijkstra's-algorithm)

<p>Given a weighted, undirected graph of V vertices, numbered from 0 to V-1, and an 2D vector/array which represents the edges:</p><p><br></p><p>Each entry in<strong> edges[i] i</strong>s of the form<strong> [u, v, weight]</strong>, where:</p><ul><li><strong>u, v </strong>→ represents the vertex having undirected edge between them</li><li><strong>weight →</strong> the weight of the edge between u and v</li></ul><p><br></p><p>Given a source node S. Find the shortest distance of all the vertex from the source vertex S. Return a list of integers denoting <strong>shortest distance </strong>between each node and source vertex S. If a vertex is not reachable from source then its distance will be 10<sup>9</sup>.</p>

**Example 1**

<p><img src="https://static.takeuforward.org/content/1788247625_b_Myy9XY.webp"></p><p><strong>Input:</strong> V = 2, edges = [[0,1,9]] , S=0</p><p><strong>Output:</strong> [0, 9]</p><p><strong>Explanation: </strong></p><p>The shortest distance from node 0(source) to node 0 is 0 and the shortest distance from node 0 to node 1 is 9.</p>

**Example 2**

<p><img src="https://static.takeuforward.org/content/1788248022_14cyNLz9.webp"></p><p><strong>Input:</strong> V = 3, edges = [[0, 1, 1], [0, 2, 6], [1, 2, 3]] , S=2</p><p><strong>Output:</strong> [4, 3, 0]</p><p><strong>Explanation:&nbsp;</strong></p><p>For node 0, the shortest path is 2-&gt;1-&gt;0 (distance=4)</p><p>For node 1, the shortest path is 2-&gt;1 (distance=3)</p>

**Example 3**

<p><strong>Input:</strong> V=4, edges = [[0,1,1],[0,3,2],[1,2,4],[2,3,3]] , S=0</p>

**Constraints**

<ul><li>1 ≤ V ≤ 10000</li><li>0 ≤ edges[i][j] ≤ 10000</li><li>1 ≤ edges.size() ≤ [ (V*(V - 1)) / 2 ]</li><li>0 ≤ S &lt; V</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [dijkstra's-algorithm.cpp](dijkstra's-algorithm.cpp) | C++ | 0.143 | 441.14 KiB | 114/114 | 2026-10-26 |
<!-- solvelogs:solutions:end -->
