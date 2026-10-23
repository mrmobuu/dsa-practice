# [Count primes in range L to R](https://takeuforward.org/practice/dsa/count-primes-in-range-l-to-r)

<p>You are given an 2D array <strong>queries </strong>of dimension <strong>n</strong>*2.</p><p>The <strong>queries[i]</strong> represents a range from queries[i][0] to queries[i][1] (include the end points).</p><p>Return the count of prime numbers present in between each range in queries array.</p>

**Example 1**

<p><strong>Input :</strong> queries = [ [2, 5], [4, 7] ]</p><p><strong>Output :</strong> [3, 2]</p><p><strong>Explanation :</strong> The range 2 to 5 contains three prime numbers 2, 3, 5.</p><p>The range 4 to 7 contains two prime numbers 5, 7.</p>

**Example 2**

<p><strong>Input :</strong> queries = [ [1, 7], [3, 7] ]</p><p><strong>Output :</strong> [4, 3]</p><p><strong>Explanation :</strong> The range 1 to 7 contains four prime numbers 2, 3, 5, 7.</p><p>The range 3 to 7 contains three prime numbers 3, 5, 7.</p>

**Example 3**

<p><strong>Input :</strong> queries = [ [1, 10], [10, 20] ]</p>

**Constraints**

<ul><li>1 &lt;= n &lt;= 10<sup>5</sup></li><li>1 &lt;= queries[i][0] &lt;= queries[i][1] &lt;= 10<sup>5</sup></li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [count-primes-in-range-l-to-r.cpp](count-primes-in-range-l-to-r.cpp) | C++ | 0.084 | 419.03 KiB | 2/2 | 2026-10-23 |
<!-- solvelogs:solutions:end -->
