# [Shortest Distance in a Binary Maze](https://takeuforward.org/practice/dsa/shortest-path-with-minimum-effort)

<p>Given an n x m matrix grid where each cell contains either 0 or 1, determine the shortest distance between a source cell and a destination cell. You can move to an adjacent cell (up, down, left, or right) if that adjacent cell has a value of 1. The path can only be created out of cells containing 1. If the destination cell is not reachable from the source cell, return -1.</p>

**Example 1**

<p><strong>Input:</strong> grid = [[1, 1, 1, 1],[1, 1, 0, 1],[1, 1, 1, 1],[1, 1, 0, 0],[1, 0, 0, 1]], source = [0, 1], destination = [2, 2]</p><p><strong>Output:</strong> 3</p><p><strong>Explanation:</strong> The shortest path from (0, 1) to (2, 2) is:</p><p>Move down to (1, 1)</p><p>Move down to (2, 1)</p><p>Move right to (2, 2)</p><p>Thus, the shortest distance is 3</p>

**Example 2**

<p><strong>Input:</strong> grid = [[1, 1, 1, 1, 1],[1, 1, 1, 1, 1],[1, 1, 1, 1, 0],[1, 0, 1, 0, 1]], source = [0, 0], destination = [3, 4]</p><p><strong>Output:</strong> -1</p><p><strong>Explanation:&nbsp;</strong></p><p>Since, there is no path possible between the source cell and the destination cell, hence we return -1.</p>

**Example 3**

<p><strong>Input:</strong> grid = [[1, 0, 1],[1, 1, 0],[1, 1, 1]], source = [0, 0], destination = [2, 2]</p>

**Constraints**

<ul><li>1 ≤ n, m ≤ 500</li><li>grid[i][j] == 0 or grid[i][j] == 1</li><li><span style="background-color: var(--background); color: var(--text-color);">The source and destination cells are always inside the given matrix.</span></li><li>The source and destination cells are always traversable, i.e., grid[source.first][source.second] = 1 and grid[destination.first][destination.second] = 1.</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [shortest-path-with-minimum-effort.cpp](shortest-path-with-minimum-effort.cpp) | C++ | 0.381 | 430.61 KiB | 112/112 | 2026-10-26 |
<!-- solvelogs:solutions:end -->
