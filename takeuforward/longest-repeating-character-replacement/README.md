# [Longest Repeating Character Replacement](https://takeuforward.org/practice/dsa/longest-repeating-character-replacement)

<p>Given an integer k and a string s, any character in the string can be selected and changed to any other uppercase English character. This operation can be performed up to<strong> k </strong>times. After completing these steps, return the <strong>length</strong> of the longest substring that contains the same letter.</p>

**Example 1**

<p><strong>Input :</strong> s = "BAABAABBBAAA" , k = 2</p><p><strong>Output :</strong> 6</p><p><strong>Explanation :</strong> we can change the B present at index 0 , 3 (0 base indexing) to A.</p><p>The new string is "<u>A</u>AA<u>A</u>AABBBAAA".</p><p>The substring "AAAAAA" is the longest substring having same letter with length 6.</p>

**Example 2**

<p><strong>Input :</strong> s = "AABABBA" , k = 1</p><p><strong>Output :</strong> 4</p><p><strong>Explanation :</strong> The underlined characters are changed in the new string obtained.</p><p>The new string is "AAB<u>B</u>BBA". The substring "BBBB" is the answer.</p><p>There are other ways to achieve this answer.</p>

**Example 3**

<p><strong>Input :</strong> s = "ABCDEF" k = 1</p>

**Constraints**

<ul><li>1 &lt;= s.length &lt;= 10<sup>5</sup></li><li>0 &lt;= k &lt;= s.length</li><li>s contains only English uppercase letters.</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [longest-repeating-character-replacement.cpp](longest-repeating-character-replacement.cpp) | C++ | 1.064 | 418.11 KiB | 10005/10005 | 2026-10-11 |
| [longest-repeating-character-replacement-2.cpp](longest-repeating-character-replacement-2.cpp) | C++ | 0.622 | 417.59 KiB | 10005/10005 | 2026-10-11 |
| [longest-repeating-character-replacement-3.cpp](longest-repeating-character-replacement-3.cpp) | C++ | 0.660 | 417.90 KiB | 10005/10005 | 2026-10-11 |
<!-- solvelogs:solutions:end -->
