# [2619. Array Prototype Last](https://leetcode.com/problems/array-prototype-last/)

**Difficulty:** Easy

<p>Write code that enhances all arrays such that you can call the&nbsp;<code>array.last()</code>&nbsp;method on any array and it will return the last element. If there are no elements in the array, it should return&nbsp;<code>-1</code>.</p>

<p>You may assume the array is the output of&nbsp;<code>JSON.parse</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [null, {}, 3]
<strong>Output:</strong> 3
<strong>Explanation:</strong> Calling nums.last() should return the last element: 3.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = []
<strong>Output:</strong> -1
<strong>Explanation:</strong> Because there are no elements, return -1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>arr</code> is a valid JSON array</li>
	<li><code>0 &lt;= arr.length &lt;= 1000</code></li>
</ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [array-prototype-last.js](array-prototype-last.js) | JavaScript | 49 ms, beats 17.42% | 53.1 MB, beats 76.15% | 27/27 | [2026-10-13](https://leetcode.com/submissions/detail/2170577857/) |
<!-- solvelogs:solutions:end -->
