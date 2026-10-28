# [Clone Graph](https://takeuforward.org/practice/dsa/clone-graph)

<p>You are given a reference to a node in a connected undirected graph. Each node has a value val (unique integer from 1 to 100) and a list of neighbors.</p><p><br></p><p>Return a deep copy (clone) of the graph. The cloned graph should have the same structure and values, but with entirely new nodes.</p><p><br></p><p>Each Node defined as:</p><p><br></p><pre class="ql-syntax" spellcheck="false">class Node {
&nbsp; &nbsp; public int val;
&nbsp; &nbsp; public List&lt;Node&gt; neighbors;
}
</pre>

**Example 1**

<p><strong>Input: </strong>adjList = [[2,4],[1,3],[2,4],[1,3]]</p><p><strong>Output:</strong> [[2,4],[1,3],[2,4],[1,3]]</p><p><strong>Explanation:&nbsp;</strong></p><p>There are 4 nodes in the graph:</p><p>- Node 1 connects to nodes 2 and 4</p><p>- Node 2 connects to nodes 1 and 3</p><p>- Node 3 connects to nodes 2 and 4</p><p>- Node 4 connects to nodes 1 and 3</p><p>The cloned graph has the same structure as the original.</p>

**Example 2**

<p><strong>Input:</strong> adjList = [[2,3],[1,3],[1,2]][[]]</p><p><strong>Output:</strong> [[2,3],[1,3],[1,2]][[]]</p>

**Example 3**

<p><strong>Input:</strong> adjList = []</p>

**Constraints**

<ul><li>The number of nodes is in the range [0, 100]</li><li>1 &lt;= Node.val &lt;= 100</li><li>Each node’s val is unique</li><li>No duplicate edges or self-loops</li><li>The graph is connected and can be visited entirely starting from node 1</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [clone-graph.cpp](clone-graph.cpp) | C++ | 0.076 | 286.61 KiB | 220/220 | 2026-10-28 |
<!-- solvelogs:solutions:end -->
