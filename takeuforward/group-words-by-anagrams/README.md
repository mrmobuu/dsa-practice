# [ Group Words by Anagrams](https://takeuforward.org/practice/dsa/group-words-by-anagrams)

<p>Given an array of strings strs, group the words that are anagrams of each other. </p><p><br></p><p>An anagram is a word formed by rearranging the letters of another word using all the original letters exactly once. You may return the groups in any order.</p>

**Example 1**

<p><strong>Input</strong>: strs = ["race", "care", "acre", "bake", "beak", "keep"]</p><p><strong>Output</strong>: [["race", "care", "acre"], ["bake", "beak"], ["keep"]]</p><p><strong>Explanation</strong>:</p><p>"race", "care", and "acre" are anagrams and can be rearranged to form each other.</p><p>"bake" and "beak" are anagrams and form another group.</p><p>"keep" does not have any anagrams in the list and forms its own group.</p>

**Example 2**

<p><strong>Input</strong>: strs = ["bob", "obb", "boo", "oob", "bbo"]</p><p><strong>Output</strong>: [["bob", "obb", "bbo"], ["boo", "oob"]]</p><p><strong>Explanation</strong>:</p><p>"bob", "obb", and "bbo" are anagrams and can be rearranged to form each other.</p><p>"boo" and "oob" are anagrams and form another group.</p>

**Constraints**

<ul><li>1 &lt;= strs.length &lt;= 10<sup>4</sup></li><li>0 &lt;= strs[i].length &lt;= 100</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [group-words-by-anagrams.cpp](group-words-by-anagrams.cpp) | C++ | 0.504 | 483.55 KiB | 117/117 | 2026-10-19 |
<!-- solvelogs:solutions:end -->
