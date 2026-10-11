# [Candy](https://takeuforward.org/practice/dsa/candy)

<p>A line of <strong>N</strong> kids is standing there. The rating values listed in the integer array <strong>ratings</strong> are assigned to each kid.</p><p><br></p><p>These kids are receiving candy, according to the following criteria:</p><p><br></p><ul><li>There must be at least one candy for every child.</li></ul><p><br></p><ul><li>Kids whose scores are higher than their neighbours receive more candies than their neighbours.</li></ul><p><br></p><p>Return the <strong>minimum</strong> number of candies needed to distribute among children.</p>

**Example 1**

<p><strong>Input :</strong> ratings = [1, 0, 5]</p><p><br></p><p><strong>Output :</strong> 5</p><p><br></p><p><strong>Explanation :</strong> The distribution of candies will be 2 , 1 , 2 to first , second , third child respectively.</p>

**Example 2**

<p><strong>Input :</strong> ratings = [1, 2, 2]</p><p><br></p><p><strong>Output :</strong> 4</p><p><br></p><p><strong>Explanation :</strong> The distribution of candies will be 1 , 2 , 1 to first , second , third child respectively.</p><p>The third gets only 1 candy because it satisfy above two criteria.</p>

**Example 3**

<p><strong>Input :</strong> ratings = [1, 2, 1, 4, 5]</p>

**Constraints**

<ul><li>1 &lt;= n &lt;= 10<sup>4</sup></li><li>0 &lt;= ratings[i] &lt;= 10<sup>5</sup></li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [candy.cpp](candy.cpp) | C++ | 0.014 | 399.07 KiB | 115/115 | 2026-10-12 |
<!-- solvelogs:solutions:end -->
