# [Rotten Oranges](https://takeuforward.org/practice/dsa/rotten-oranges)

<p>Given an n x m grid, where each cell has the following values :&nbsp;</p><p><br></p><p>2&nbsp;-&nbsp;represents a rotten orange</p><p>1&nbsp;-&nbsp;represents a Fresh orange</p><p>0&nbsp;-&nbsp;represents an Empty Cell</p><p>Every minute, if a fresh orange is adjacent to a rotten orange in <strong>4-direction</strong> ( upward, downwards, right, and left ) it becomes rotten.&nbsp;</p><p><br></p><p>Return the <strong>minimum</strong> number of <strong>minutes</strong> required such that none of the cells has a Fresh Orange. If it's not possible, return -1.</p>

**Example 1**

<p><strong>Input:</strong> grid = [ [2, 1, 1] , [0, 1, 1] , [1, 0, 1] ]</p><p><strong>Output:</strong> -1</p><p><strong>Explanation:</strong>&nbsp;Orange at (3,0) cannot be rotten.</p><p><br></p><p><img src="https://static.takeuforward.org/content/ProblemSetter-NWsocTcc"></p>

**Example 2**

<p><strong>Input:</strong> grid = [ [2,1,1] , [1,1,0] , [0,1,1] ]&nbsp;</p><p><strong>Output:</strong>&nbsp;4</p><p><strong>Explanation:</strong></p><p><img src="https://static.takeuforward.org/content/ProblemSetter-yuB56suz"></p>

**Example 3**

<p>Input: grid = [[0,1,2],[0,1,2],[2,1,1]]</p>

**Constraints**

<ul><li>&nbsp;&nbsp;1 &lt;= n, m &lt;= 500</li><li>&nbsp;&nbsp;grid[i][j] == 0 or 1 or 2</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [rotten-oranges.cpp](rotten-oranges.cpp) | C++ | 0.082 | 443.45 KiB | 123/123 | 2026-10-25 |
<!-- solvelogs:solutions:end -->
