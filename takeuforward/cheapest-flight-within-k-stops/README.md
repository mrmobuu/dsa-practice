# [Cheapest flight within K stops](https://takeuforward.org/practice/dsa/cheapest-flight-within-k-stops)

<p>There are n cities and m edges connected by some number of flights. Given an array of flights where flights[i] = [ from<sub>i</sub>, to<sub>i</sub>, price<sub>i</sub>] indicates that there is a flight from city from<sub>i</sub> to city to<sub>i</sub> with cost price<sub>i</sub>. Given three integers src, dst, and k, and return the <strong>cheapest price</strong> from src to dst with at most<strong> k</strong> stops. If there is no such route, return -1.</p>

**Example 1**

<p><img src="https://static.takeuforward.org/content/1789073726_xU-q_k_l.webp"></p><p><br></p><p><strong>Input:</strong> n = 4, flights = [[0,1,100],[1,2,100],[2,0,100],[1,3,600],[2,3,200]], src = 0, dst = 3, k = 1</p><p><strong>Output:</strong> 700</p><p><strong>Explanation:</strong> The optimal path with at most 1 stops from city 0 to 3 is marked in red and has cost 100 + 600 = 700.</p><p>Note that the path through cities [0,1,2,3] is cheaper but is invalid because it uses 2 stops.</p>

**Example 2**

<p><img src="https://static.takeuforward.org/content/1789479845_h5m1peyr.webp"></p><p><br></p><p><strong>Input:</strong> n = 3, flights = [[0,1,100],[1,2,100],[0,2,500]], src = 0, dst = 2, k = 1</p><p><strong>Output:</strong> 200</p><p><strong>Explanation:</strong>The optimal path with at most 1 stops from city 0 to 2 is marked in red and has cost 100 + 100 = 200.</p>

**Example 3**

<p>Input: n = 3, flights = [[0, 1, 100], [1, 2, 100], [0, 2, 500]], src = 0, dst = 2, k = 0&nbsp;</p>

**Constraints**

<ul><li>&nbsp;&nbsp;1 &lt;= n &lt;= 100</li><li>&nbsp;&nbsp;0 &lt;= flights.length &lt;= (n * (n - 1) / 2)</li><li>&nbsp;&nbsp;&nbsp;flights[i].length == 3</li><li>&nbsp;&nbsp;0 &lt;= from<sub>i</sub>, to<sub>i </sub>&lt; n</li><li>&nbsp;&nbsp;from<sub>i</sub> != to<sub>i</sub></li><li>&nbsp;&nbsp;1 &lt;= price<sub>i </sub>&lt;= 10<sup>4</sup></li><li>&nbsp;&nbsp;There will not be any multiple flights between the two cities.</li><li>&nbsp;&nbsp;0 &lt;= src, dst, k &lt; n</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [cheapest-flight-within-k-stops.cpp](cheapest-flight-within-k-stops.cpp) | C++ | 0.034 | 445.71 KiB | 86/86 | 2026-10-27 |
<!-- solvelogs:solutions:end -->
