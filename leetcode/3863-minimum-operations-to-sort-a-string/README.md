# [3863. Minimum Operations to Sort a String](https://leetcode.com/problems/minimum-operations-to-sort-a-string/)

**Difficulty:** Medium | **Topics:** String

<p data-end="244" data-start="156">You are given a string <code>s</code> consisting of lowercase English letters.</p>

<p>In one operation, you can select any <strong><span data-keyword="substring-nonempty">substring</span></strong> of <code>s</code> that is <strong>not</strong> the entire string and <strong>sort</strong> it in <strong>non-descending alphabetical</strong> order.</p>

<p>Return the <strong>minimum</strong> number of operations required to make <code>s</code> sorted in <strong>non-descending</strong> order. If it is not possible, return -1.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;dog&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong>​​​​​​​</p>

<ul>
	<li>Sort substring <code>&quot;og&quot;</code> to <code>&quot;go&quot;</code>.</li>
	<li>Now, <code>s = &quot;dgo&quot;</code>, which is sorted in ascending order. Thus, the answer is 1.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;card&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>Sort substring <code>&quot;car&quot;</code> to <code>&quot;acr&quot;</code>, so <code>s = &quot;acrd&quot;</code>.</li>
	<li>Sort substring <code>&quot;rd&quot;</code> to <code>&quot;dr&quot;</code>, making <code>s = &quot;acdr&quot;</code>, which is sorted in ascending order. Thus, the answer is 2.</li>
</ul>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;gf&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">-1</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>It is impossible to sort <code>s</code> under the given constraints. Thus, the answer is -1.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> consists of only lowercase English letters.</li>
</ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [minimum-operations-to-sort-a-string.cpp](minimum-operations-to-sort-a-string.cpp) | C++ | 121 ms, beats 16.37% | 32.1 MB, beats 22.57% | 1291/1291 | [2026-10-21](https://leetcode.com/submissions/detail/2177633658/) |
| [minimum-operations-to-sort-a-string-2.cpp](minimum-operations-to-sort-a-string-2.cpp) | C++ | 92 ms, beats 23.89% | 32.4 MB, beats 20.80% | 1291/1291 | [2026-10-21](https://leetcode.com/submissions/detail/2177634040/) |
<!-- solvelogs:solutions:end -->
