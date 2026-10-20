# [Combination Sum](https://takeuforward.org/practice/dsa/combination-sum)

<p>Provided with a goal integer <strong>target </strong>and an array of unique integers <strong>nums</strong>, provide a list of all possible combinations of nums in which the selected numbers add up to the target. The combinations can be returned in any order.</p><p><br></p><p>A number may be selected from nums an infinite number of times. There are two distinct combinations if the frequency of at least one of the selected numbers differs.</p><p><br></p><p>The test cases are created so that, for the given input, there are fewer than 150 possible combinations that add up to the target.</p><p><br></p><p>If there is no possible combination, then return an empty vector.</p>

**Example 1**

<p><strong>Input :</strong> nums = [2, 3, 5, 4] , target = 7</p><p><strong>Output :</strong> [ [2, 2, 3], [2, 5] , [3, 4] ]</p><p><strong>Explanation :</strong></p><p>2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.</p><p>2 and 5 are candidates, and 2 + 5 = 7.</p><p>3 and 4 are candidates, and 3 + 4 = 7.</p><p>There are total three combinations.</p>

**Example 2**

<p><strong>Input :</strong> nums = [2], target = 1</p><p><strong>Output :</strong> []</p><p><strong>Explanation :</strong> There is no way we can choose the candidates to sum up to target.</p>

**Example 3**

<p><strong>Input :</strong> nums = [3, 4, 5, 6], target = 10</p>

**Constraints**

<ul><li>1 &lt;= candidates.length &lt;= 30</li><li>2 &lt;= candidates[i] &lt;= 40</li><li>All elements of candidates are distinct.</li><li>1 &lt;= target &lt;= 40</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [combination-sum.cpp](combination-sum.cpp) | C++ | 0.033 | 431.27 KiB | 214/214 | 2026-10-20 |
<!-- solvelogs:solutions:end -->
