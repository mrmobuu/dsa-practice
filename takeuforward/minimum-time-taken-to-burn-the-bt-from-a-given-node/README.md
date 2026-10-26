# [Minimum time taken to burn the BT from a given Node](https://takeuforward.org/practice/dsa/minimum-time-taken-to-burn-the-bt-from-a-given-node)

<p>Given a target node data and a root of binary tree. If the target is set on fire, determine the shortest amount of <strong>time</strong> needed to <strong>burn</strong> the entire binary tree.</p><p><br></p><p>It is known that in 1 second all nodes connected to a given node get burned. That is its left child, right child, and parent.</p>

**Example 1**

<p><strong>Input :</strong> root = [1, 2, 3, 4, null, 5, 6, null, 7]. target = 1</p><p><strong>Output :</strong> 3</p><p><strong>Explanation :</strong> The node with value 1 is set on fire.</p><p>In 1st second it burns node 2 and node 3.</p><p>In 2nd second it burns nodes 4, 5, 6.</p><p>In 3rd second it burns node 7.</p><p><img src="https://static.takeuforward.org/content/1789463238_3iwx_0oc.webp"></p>

**Example 2**

<p><strong>Input :</strong> root = [1, 2, 3, null, 5, null, 4], target = 4</p><p><strong>Output :</strong> 4</p><p><strong>Explanation :</strong> The node with value 4 is set on fire.</p><p>In 1st second it burns node 3.</p><p>In 2nd second it burns node 1.</p><p>In 3rd second it burns node 2.</p><p>In 4th second it burns node 5.</p><p><img src="https://static.takeuforward.org/content/1789463245_YIQgueZg.webp"></p>

**Example 3**

<p><strong>Input :</strong> root = [1, 2, 3, 6, 5, 8, 4], target = 4</p>

**Constraints**

<ul><li>1 &lt;= Number of Nodes &lt;= 10<sup>4</sup></li><li>-10<sup>5</sup> &lt;= Node.val &lt;= 10<sup>5</sup></li><li>All Node.val values are <strong>unique</strong>.</li><li>target will always be present in tree</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [minimum-time-taken-to-burn-the-bt-from-a-given-node.cpp](minimum-time-taken-to-burn-the-bt-from-a-given-node.cpp) | C++ | 0.124 | 466.30 KiB | 115/115 | 2026-10-26 |
<!-- solvelogs:solutions:end -->
