# [Minimum Bit Flips to Convert Number](https://takeuforward.org/practice/dsa/minimum-bit-flips-to-convert-number)

<p>Given two integers start and goal. Flip the <strong>minimum</strong> number of bits of start integer to convert it into goal integer.</p><p><br></p><p>A bits flip in the number val is to choose any bit in binary representation of val and flipping it from either 0 to 1 or 1 to 0.</p>

**Example 1**

<p><strong>Input :</strong> start = 10 , goal = 7</p><p><strong>Output :</strong> 3</p><p><strong>Explanation :</strong> The binary representation of 10 is "<u>10</u>1<u>0</u>".</p><p>The binary representation of 7 is "111".</p><p>If we flip the underlined bits in binary representation of 10 then we will obtain our goal.</p>

**Example 2**

<p><strong>Input :</strong> start = 3 , goal = 4</p><p><strong>Output :</strong> 3</p><p><strong>Explanation :</strong> The binary representation of 3 is "011".</p><p>The binary representation of 4 is "100".</p><p>So if we flip all the three bits of 3 then we will reach our goal number.</p>

**Example 3**

<p><strong>Input :</strong> start = 1 , goal = 7</p>

**Constraints**

<ul><li>1 &lt;= start , end &lt;= 10<sup>9</sup></li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [minimum-bit-flips-to-convert-number.cpp](minimum-bit-flips-to-convert-number.cpp) | C++ | 0.020 | 391.98 KiB | 2003/2003 | 2026-10-13 |
<!-- solvelogs:solutions:end -->
