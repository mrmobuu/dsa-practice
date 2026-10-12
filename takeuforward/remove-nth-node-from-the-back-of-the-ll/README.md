# [Remove Nth node from the back of the LL](https://takeuforward.org/practice/dsa/remove-nth-node-from-the-back-of-the-ll)

<p>Given the head of a singly linked list and an integer n. Remove the n<sup>th</sup> node from the back of the linked List and return the head of the modified list. The value of n will always be less than or equal to the number of nodes in the linked list.</p>

**Example 1**

<p><strong>Input</strong>: linkedList = 1 -&gt; 2 -&gt; 3 -&gt; 4 -&gt; 5, n = 2</p><p><strong>Output</strong>: 1 -&gt; 2 -&gt; 3 -&gt; 5</p><p><strong>Explanation</strong>: The 2nd node from the back was the node with value 4.</p>

**Example 2**

<p><strong>Input</strong>: linkedList = 5 -&gt; 4 -&gt; 3 -&gt; 2 -&gt; 1, n = 5</p><p><strong>Output</strong>: 4 -&gt; 3 -&gt; 2 -&gt; 1</p><p><strong>Explanation</strong>: The 5th node from the back is the first node.</p>

**Example 3**

<p><strong>Input</strong>: linkedList = 9 -&gt; 8 -&gt; 7, n = 1</p>

**Constraints**

<ul><li>1 &lt;= number of nodes in the Linked List &lt;= 10<sup>5</sup></li><li>0 &lt;= ListNode.val &lt;= 10<sup>4</sup></li><li>1 &lt;= n &lt;= number of nodes in the Linked List.</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [remove-nth-node-from-the-back-of-the-ll.cpp](remove-nth-node-from-the-back-of-the-ll.cpp) | C++ | 0.039 | 393.27 KiB | 106/106 | 2026-10-12 |
<!-- solvelogs:solutions:end -->
