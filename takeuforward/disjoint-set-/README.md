# [Disjoint Set ](https://takeuforward.org/practice/dsa/disjoint-set-)

<p>Design a disjoint set (also called union-find) data structure that supports the following operations:</p><p><br></p><p>DisjointSet(int n) initializes the disjoint set with n elements.</p><p>void unionByRank(int u, int v) merges the sets containing u and v using the rank heuristic.</p><p>void unionBySize(int u, int v) merges the sets containing u and v using the size heuristic.</p><p>bool find(int u, int v) checks if the elements u and v are in the same set and returns true if they are, otherwise false.</p>

**Example 1**

<p>Input:</p><p>["DisjointSet", "unionByRank", "unionBySize", "find", "find"]</p><p>[[5], [0, 1], [2, 3], [0, 1], [0, 3]]</p><p><br></p><p>Output:</p><p>[null, null, null, true, false]</p><p><br></p><p>Explanation:</p><p>DisjointSet ds = new DisjointSet(5); // Initialize a disjoint set with 5 elements</p><p>ds.unionByRank(0, 1); // Merge sets containing 0 and 1 using rank</p><p>ds.unionBySize(2, 3); // Merge sets containing 2 and 3 using size</p><p>ds.find(0, 1); // Returns true as 0 and 1 are in the same set</p><p>ds.find(0, 3); // Returns false as 0 and 3 are not in the same set</p>

**Example 2**

<p>Input:</p><p>["DisjointSet", "unionBySize", "unionBySize", "find", "find"]</p><p>[[3], [0, 1], [1, 2], [0, 2], [0, 1]]</p><p><br></p><p>Output:</p><p>[null, null, null, true, true]</p><p><br></p><p>Explanation:</p><p>DisjointSet ds = new DisjointSet(3); // Initialize a disjoint set with 3 elements</p><p>ds.unionBySize(0, 1); // Merge sets containing 0 and 1 using size</p><p>ds.unionBySize(1, 2); // Merge sets containing 1 and 2 using rank</p><p>ds.find(0, 2); // Returns true as 0 and 2 are in the same set</p><p>ds.find(0, 1); // Returns true as 0 and 1 are in the same set</p>

**Example 3**

<p>Input:</p><p>["DisjointSet", "unionByRank", "unionBySize", "unionByRank", "find", "find"]</p><p>[[5], [0, 1], [3, 4], [1, 2], [0, 2], [1, 3]]</p>

**Constraints**

<ul><li>1 &lt;= n &lt;= 10<sup>4</sup></li><li>0 &lt;= u, v &lt; n</li><li>At most 5 * 10<sup>4</sup> calls will be made to unionByRank, unionBySize, and find</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [disjoint-set-.cpp](disjoint-set-.cpp) | C++ | 0.061 | 422.09 KiB | 104/104 | 2026-10-26 |
<!-- solvelogs:solutions:end -->
