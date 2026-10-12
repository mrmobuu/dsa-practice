# [4078. Three Fibonacci Sum](https://leetcode.com/problems/three-fibonacci-sum/)

**Difficulty:** Easy

<p>You are given an integer <code>n</code>.</p>

<p>The <strong>Fibonacci sequence</strong> starts with 0 and 1, and each subsequent number is the sum of the previous two numbers. Its first few terms are <code>0, 1, 1, 2, 3, 5, 8, 13, ...</code>.</p>

<p>Return <code>true</code> if <code>n</code> can be expressed as the sum of <strong>three consecutive terms</strong> in the Fibonacci sequence, and <code>false</code> otherwise.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 16</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>

<p><strong>Explanation:</strong></p>

<p>The three consecutive terms 3, 5, and 8 have a sum of <code>3 + 5 + 8 = 16</code>.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 8</span></p>

<p><strong>Output:</strong> <span class="example-io">false</span></p>

<p><strong>Explanation:</strong></p>

<p>Although <code>1 + 2 + 5 = 8</code>, these terms are not consecutive in the Fibonacci sequence. No three consecutive terms have a sum of 8.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 2</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>

<p><strong>Explanation:</strong></p>

<p>The first three terms have a sum of <code>0 + 1 + 1 = 2</code>.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>9</sup></code></li>
</ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [three-fibonacci-sum.cpp](three-fibonacci-sum.cpp) | C++ | 3 ms, beats 7.91% | 10 MB, beats 5.03% | 979/979 | [2026-10-12](https://leetcode.com/submissions/detail/2169911437/) |
<!-- solvelogs:solutions:end -->
