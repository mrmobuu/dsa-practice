# [Koko eating bananas](https://takeuforward.org/practice/dsa/koko-eating-bananas)

<p>A monkey is given n piles of bananas, where the 'ith' pile has nums[i] bananas. An integer h represents the total time in hours to eat all the bananas.</p><p><br></p><p>Each hour, the monkey chooses a non-empty pile of bananas and eats k bananas. If the pile contains fewer than k bananas, the monkey eats all the bananas in that pile and does not consume any more bananas in that hour.</p><p><br></p><p>Determine the <strong>minimum</strong> number of bananas the monkey must eat per hour to finish all the bananas within h hours.</p>

**Example 1**

<p>Input: n = 4, nums = [7, 15, 6, 3], h = 8</p><p>Output: 5</p><p>Explanation: If Koko eats 5 bananas/hr, he will take 2, 3, 2, and 1 hour to eat the piles accordingly. So, he will take 8 hours to complete all the piles.&nbsp;&nbsp;</p>

**Example 2**

<p>Input: n = 5, nums = [25, 12, 8, 14, 19], h = 5</p><p>Output: 25</p><p>Explanation: If Koko eats 25 bananas/hr, he will take 1, 1, 1, 1, and 1 hour to eat the piles accordingly. So, he will take 5 hours to complete all the piles.</p>

**Example 3**

<p>Input: n = 4, nums = [3, 7, 6, 11], h = 8</p>

**Constraints**

<ul><li>&nbsp;&nbsp;1 &lt;= n &lt;= 10<sup>4</sup></li><li>&nbsp;&nbsp;n &lt;= h &lt;= 10<sup>9</sup></li><li>&nbsp;&nbsp;1 &lt;= nums[i] &lt;= 10<sup>9</sup></li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [koko-eating-bananas.cpp](koko-eating-bananas.cpp) | C++ | 0.016 | 401.14 KiB | 121/121 | 2026-10-11 |
<!-- solvelogs:solutions:end -->
