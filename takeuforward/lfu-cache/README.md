# [LFU Cache](https://takeuforward.org/practice/dsa/lfu-cache)

<p>Design and implement a data structure for a <strong>Least Frequently Used (LFU) </strong>cache.</p><p><br></p><p>Implement the LFUCache class with the following functions:</p><p><br></p><p><strong>LFUCache(int capacity):</strong> Initialize the object with the specified capacity.</p><p><strong>int get(int key):</strong> Retrieve the value of the key if it exists in the cache; otherwise, return -1.</p><p><strong>void put(int key, int value):</strong> Update the value of the key if it is present in the cache, or insert the key if it is not already present. If the cache has reached its capacity, invalidate and remove the least frequently used key before inserting a new item. In case of a tie (i.e., two or more keys with the same frequency), invalidate the least recently used key.</p><p><br></p><p>A use counter is maintained for each key in the cache to determine the least frequently used key. The key with the smallest use counter is considered the least frequently used.</p><p><br></p><p>When a key is first inserted into the cache, its use counter is set to 1 due to the put operation. The use counter for a key in the cache is incremented whenever a get or put operation is called on it.</p><p><br></p><p>Ensure that the functions get and put run in <strong>O(1)</strong> average time complexity.</p>

**Example 1**

<p>Input:</p><p>["LFUCache", "put", "put", "get", "put", "get", "get", "put", "get", "get", "get"]</p><p>[[2], [1, 1], [2, 2], [1], [3, 3], [2], [3], [4, 4], [1], [3], [4]]</p><p>Output:</p><p>[null, null, null, 1, null, -1, 3, null, -1, 3, 4]</p><p>Explanation:</p><p>// cnt(x) = the use counter for key x</p><p>// cache=[] will show the last used order for tiebreakers (leftmost element is most recent)</p><p>LFUCache lfu = new LFUCache(2);</p><p>lfu.put(1, 1);&nbsp;&nbsp;// cache=[1,_], cnt(1)=1</p><p>lfu.put(2, 2);&nbsp;&nbsp;// cache=[2,1], cnt(2)=1, cnt(1)=1</p><p>lfu.get(1);&nbsp;&nbsp;&nbsp;// return 1</p><p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// cache=[1,2], cnt(2)=1, cnt(1)=2</p><p>lfu.put(3, 3);&nbsp;&nbsp;// 2 is the LFU key because cnt(2)=1 is the smallest, invalidate 2.</p><p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// cache=[3,1], cnt(3)=1, cnt(1)=2</p><p>lfu.get(2);&nbsp;&nbsp;&nbsp;// return -1 (not found)</p><p>lfu.get(3);&nbsp;&nbsp;&nbsp;// return 3</p><p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// cache=[3,1], cnt(3)=2, cnt(1)=2</p><p>lfu.put(4, 4);&nbsp;&nbsp;// Both 1 and 3 have the same cnt, but 1 is LRU, invalidate 1.</p><p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// cache=[4,3], cnt(4)=1, cnt(3)=2</p><p>lfu.get(1);&nbsp;&nbsp;&nbsp;// return -1 (not found)</p><p>lfu.get(3);&nbsp;&nbsp;&nbsp;// return 3</p><p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// cache=[3,4], cnt(4)=1, cnt(3)=3</p><p>lfu.get(4);&nbsp;&nbsp;&nbsp;// return 4</p><p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// cache=[4,3], cnt(4)=2, cnt(3)=3</p>

**Example 2**

<p>Input:</p><p>["LFUCache", "put", "put", "put", "put", "put", "get", "get", "get", "get", "get"]</p><p>[[3], [5, 7], [4, 6], [3, 5], [2, 4], [1, 3], [1], [2], [3], [4], [5]]</p><p>Output:</p><p>[null, null, null, null, null, null, 3, 4, 5, -1, -1]</p><p>Explanation:</p><p>// cnt(x) = the use counter for key x</p><p>// cache=[] will show the last used order for tiebreakers (leftmost element is most recent)</p><p>LFUCache lfu = new LFUCache(3);</p><p>lfu.put(5, 7);&nbsp;&nbsp;// cache=[5], cnt(5)=1</p><p>lfu.put(4, 6);&nbsp;&nbsp;// cache=[4,5], cnt(4)=1, cnt(5)=1</p><p>lfu.put(3, 5);&nbsp;&nbsp;// cache=[3,4,5], cnt(3)=1, cnt(4)=1, cnt(5)=1</p><p>lfu.put(2, 4);&nbsp;&nbsp;// 5 is the LFU key because cnt(5)=1 is the smallest, invalidate 5.</p><p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// cache=[2,3,4], cnt(2)=1, cnt(3)=1, cnt(4)=1</p><p>lfu.put(1, 3);&nbsp;&nbsp;// 4 is the LFU key because cnt(4)=1 is the smallest, invalidate 4.</p><p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// cache=[1,2,3], cnt(1)=1, cnt(2)=1, cnt(3)=1</p><p>lfu.get(1);&nbsp;&nbsp;&nbsp;// return 3</p><p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// cache=[1,2,3], cnt(1)=2, cnt(2)=1, cnt(3)=1</p><p>lfu.get(2);&nbsp;&nbsp;&nbsp;// return 4</p><p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// cache=[2,1,3], cnt(1)=2, cnt(2)=2, cnt(3)=1</p><p>lfu.get(3);&nbsp;&nbsp;&nbsp;// return 5</p><p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// cache=[3,2,1], cnt(1)=2, cnt(2)=2, cnt(3)=2</p><p>lfu.get(4);&nbsp;&nbsp;&nbsp;// return -1 (not found)</p><p>lfu.get(5);&nbsp;&nbsp;&nbsp;// return -1 (not found)</p>

**Example 3**

<p>Input:</p><p>["LFUCache", "put", "get", "put", "get", "get"]</p><p>[[1], [1, 10], [1], [2, 20], [1], [2]]</p>

**Constraints**

<ul><li>1 &lt;= capacity &lt;= 10<sup>3</sup></li><li>0 &lt;= key &lt;= 10<sup>4</sup></li><li>0 &lt;= value &lt;= 10<sup>5</sup></li><li>At most 10<sup>5</sup> calls will be made to get and put.</li></ul>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [lfu-cache.cpp](lfu-cache.cpp) | C++ | 0.147 | 440.66 KiB | 107/107 | 2026-10-23 |
<!-- solvelogs:solutions:end -->
