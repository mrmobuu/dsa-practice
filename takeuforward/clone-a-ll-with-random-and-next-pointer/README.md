# [Clone a LL with random and next pointer](https://takeuforward.org/practice/dsa/clone-a-ll-with-random-and-next-pointer)

<p>Given the head of a special linked list of n nodes where each node contains an additional pointer called 'random' which can point to any node in the list or null.</p><p><br></p><p>Construct a <strong>deep copy</strong> of the linked list where,</p><ul><li>n new nodes are created with corresponding values as original linked list.</li><li>The random pointers point to the corresponding new nodes as per their arrangement in the original list.</li><li>Return the head of the newly constructed linked list.</li></ul><p><br></p><p><strong>Note</strong>: For custom input, a n x 2 matrix is taken with each row having 2 values:<strong>[ val, random_index] </strong>where,</p><ul><li><strong>val</strong>: an integer representing ListNode.val</li><li><strong>random_index</strong>: index of the node (0 - n-1) that the random pointer points to, otherwise -1.</li></ul>

**Example 1**

<p><strong>Input</strong>: [[1, -1], [2, 0], [3, 4], [4, 1], [5, 2]]</p><p><strong>Output</strong>: 1 2 3 4 5, true</p><p><strong>Explanation</strong>: All the nodes in the new list have same corresponding values as original nodes.</p><p>All the random pointers point to their corresponding nodes in the new list.</p><p>'true' represents that the nodes and references were created new.</p>

**Example 2**

<p><strong>Input</strong>: [[5, -1], [3, -1], [2, 1], [1, 1]]</p><p><strong>Output</strong>: 5 3 2 1, true</p><p><strong>Explanation</strong>: All the nodes in the new list have same corresponding values as original nodes.</p><p>All the random pointers point to their corresponding nodes in the new list.</p><p>'true' represents that the nodes and references were created new.</p><p>[[5, -1], [3, -1], [2, -1], [1, -1]] will be incorrect, although it has the same values.</p>

**Example 3**

<p><strong>Input</strong>: [[-1, -1], [-2, -1], [-3, -1], [10, -1]]</p>

**Constraints**

<ul><li>n == number of nodes in the linked list.</li><li>1 &lt;= n &lt;= 10<sup>5</sup></li><li>-10<sup>4</sup> &lt;= ListNode.val &lt;= 10<sup>4</sup></li><li>0 &lt;= random_index &lt; n or random_index == -1.</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [clone-a-ll-with-random-and-next-pointer.cpp](clone-a-ll-with-random-and-next-pointer.cpp) | C++ | 0.649 | 439.15 KiB | 104/104 | 2026-10-21 |
<!-- solvelogs:solutions:end -->
