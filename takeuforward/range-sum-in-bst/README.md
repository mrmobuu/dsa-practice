# [Range Sum in BST](https://takeuforward.org/practice/dsa/range-sum-in-bst)

<p>Given a <strong>root </strong>of binary search tree and two integers low, high. Return the sum of all elements that lie in inclusive range of [low, high].</p>

**Example 1**

<p><strong>Input :</strong> root = 5 2 7 1 3 null 10 , low = 3, high = 7</p><p><strong>Output :</strong> 15</p><p><strong>Explanation :</strong> The element 3, 5, 7 liens in range [3, 7]. The sum is 3 + 5 + 7 -&gt; 15.</p>

**Example 2**

<p><strong>Input :</strong> root = 15 12 17 11 13 null 10 , low = 3, high = 7</p><p><strong>Output :</strong> 0</p><p><strong>Explanation :</strong> No element lies in the range [3,7], so the sum is 0.</p>

**Constraints**

<ul><li>1 &lt;= Number of Nodes &lt;= 104</li><li>1 &lt;= nodes value &lt;= 105</li></ul><p><br></p>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [range-sum-in-bst.cpp](range-sum-in-bst.cpp) | C++ | 0.022 | 421.41 KiB | 110/110 | 2026-10-21 |
| [range-sum-in-bst-2.cpp](range-sum-in-bst-2.cpp) | C++ | 0.020 | 421.61 KiB | 110/110 | 2026-10-21 |
<!-- solvelogs:solutions:end -->
