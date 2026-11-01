# [Merge two Sorted Lists ](https://takeuforward.org/practice/dsa/merge-sorted-lists-)

<p>Given the heads of two linked lists, list1 and list2, where each linked list has its elements sorted in non-decreasing order, <strong>merge</strong> them into a single sorted linked list and return the head of the merged linked list.</p>

**Example 1**

<p><strong>Input</strong>: list1 = head -&gt; 2 -&gt; 4 -&gt; 7 -&gt; 9, list2 = head -&gt; 1 -&gt; 2 -&gt; 5 -&gt; 6</p><p><strong>Output</strong>: head -&gt; 1 -&gt; 2 -&gt; 2 -&gt; 4 -&gt; 5 -&gt; 6 -&gt;7 -&gt; 9</p><p><strong>Explanation</strong>: head -&gt; <u>1</u> -&gt; <u>2</u> -&gt; 2 -&gt; 4 -&gt; <u>5</u> -&gt; <u>6</u> -&gt;7 -&gt; 9, the underlined nodes come from list2, the others come from list1.</p>

**Example 2**

<p><strong>Input</strong>: list1 = head -&gt; 1 -&gt; 2 -&gt; 3 -&gt; 4, list2 = head -&gt; 5 -&gt; 6 -&gt; 10</p><p><strong>Output</strong>: head -&gt; 1 -&gt; 2 -&gt; 3 -&gt; 4 -&gt; 5 -&gt; 6 -&gt; 10</p><p><strong>Explanation</strong>: head -&gt; 1 -&gt; 2 -&gt; 3 -&gt; 4 -&gt; <u>5</u> -&gt; <u>6</u> -&gt; <u>10</u>, the underlined nodes come from list2, the others come from list1.</p>

**Example 3**

<p><strong>Input</strong>: list1 = head -&gt; 0 -&gt; 2, list2 = head -&gt; 1 -&gt; 3 -&gt; 5 -&gt; 6</p>

**Constraints**

<ul><li>0 &lt;= number of nodes in list1, list2 &lt;= 5 * 10<sup>4</sup></li><li>-10<sup>4</sup> &lt;= ListNode.val &lt;= 10<sup>4</sup></li><li>list1 and list2 are sorted in non-decreasing order.</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [merge-sorted-lists-.cpp](merge-sorted-lists-.cpp) | C++ | 0.069 | 395.10 KiB | 107/107 | 2026-11-01 |
<!-- solvelogs:solutions:end -->
