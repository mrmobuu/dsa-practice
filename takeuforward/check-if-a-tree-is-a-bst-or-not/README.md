# [Check if a tree is a BST or not](https://takeuforward.org/practice/dsa/check-if-a-tree-is-a-bst-or-not)

<p>Given the <strong>root</strong> node of a binary tree. Return <strong>true</strong> if the given binary tree is a binary search tree(BST) else <strong>false</strong>.</p><p><br></p><p>A <strong>valid</strong> <strong>BST</strong> is defined as follows:</p><p><br></p><ul><li>The left&nbsp;subtree of a node contains only nodes with key <strong>strictly</strong> less than the node's key.</li></ul><p><br></p><ul><li>The right subtree of a node contains only nodes with key <strong>strictly</strong> greater than the node's key.</li></ul><p><br></p><ul><li>Both the left and right subtrees must also be binary search trees.</li></ul>

**Example 1**

<p><strong>Input :</strong> root = [5, 3, 6, 2, 4, null, 7]</p><p><strong>Output :</strong> true</p><p><strong>Explanation :</strong></p><p>Below is image of the given tree.</p><p><img src="https://static.takeuforward.org/content/1789455869_d2r4ik0J.webp"></p>

**Example 2**

<p><strong>Input :</strong> root = [5, 3, 6, 4, 2, null, 7]</p><p><strong>Output :</strong> false</p><p><strong>Explanation :</strong></p><p><strong>﻿</strong>Below is image of the given tree.</p><p>The node 4 and node 2 violates the BST rule of smaller to left and larger to right.</p><p><img src="https://static.takeuforward.org/content/1789455881_XZG_6KxM.webp"></p>

**Example 3**

<p><strong>Input :</strong> root = [2, 1, 3]</p>

**Constraints**

<ul><li>1 &lt;= Number of Nodes &lt;= 10<sup>4</sup></li><li>-2<sup>31</sup> &lt;= Node.val &lt;= 2<sup>31</sup> - 1</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [check-if-a-tree-is-a-bst-or-not.cpp](check-if-a-tree-is-a-bst-or-not.cpp) | C++ | 0.138 | 423.97 KiB | 125/125 | 2026-10-26 |
<!-- solvelogs:solutions:end -->
