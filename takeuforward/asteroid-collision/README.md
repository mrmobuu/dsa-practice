# [Asteroid Collision](https://takeuforward.org/practice/dsa/asteroid-collision)

<p>You are given an integer array <strong>asteroids </strong>representing asteroids in a row. <strong>Each asteroid moves at the</strong> <strong>same speed.</strong></p><p><br></p><p>The <strong>absolute value </strong>of an asteroid represents its <strong>size</strong>. The sign of an asteroid represents its direction: <strong>positive (+) means moving right, negative (-) means moving left.</strong></p><p><br></p><p><strong>Collision rules:</strong></p><ul><li>Asteroids moving in the same direction never collide.</li><li>When two asteroids moving in opposite directions collide, the smaller asteroid explodes and the larger asteroid continues moving in the same direction.</li><li>If both asteroids are equal in size, both explode.</li><li>Collisions are resolved one at a time, from left to right. If an asteroid survives a collision, it continues moving and may collide immediately with the next asteroid in its path.</li></ul><p><br></p><p>Return the <strong>state </strong>of the <strong>asteroids </strong>after all collisions as an array in the <strong>same order.</strong></p>

**Example 1**

<p><strong>Input: </strong>asteroids = [1, 2, 3, -4, -2]</p><p><strong>Output:</strong> [-4, -2]</p><p><strong>Explanation:</strong></p><ul><li>Asteroid 3 and -4 collide → 3 explodes, -4 survives.</li><li>Asteroid -4 continues and collides with 2 → 2 explodes, -4 continues.</li><li>Asteroid -4 collides with 1 → 1 explodes, -4 continues.</li><li>Next asteroid -2 is moving left → no collision.</li></ul><p><strong>Final state: [-4, -2].</strong></p>

**Example 2**

<p><strong>Input:</strong> asteroids = [5, 10, -5, -10, 8, -8, -3, 12]</p><p><strong>Output:</strong> [5, 12]</p><p><strong>Explanation:</strong></p><ul><li>Asteroid 10 and -5 collide → -5 explodes, 10 survives.</li><li>Asteroid 10 and -10 collide → both explode.</li><li>Asteroid 8 and -8 collide → both explode.</li><li>Asteroid -3 moves left → collides with 5 (right-moving) → 5 &gt; 3 → -3 explodes, 5 survives.</li><li>Asteroid 12 moves right → no collision with 5 because it is behind → 12 survives.</li></ul><p><strong>Final state: [5, 12]</strong></p>

**Example 3**

<p>Input: asteroids = [10, 2, -5]</p>

**Constraints**

<p>·&nbsp;&nbsp;2 &lt;= asteroids.length &lt;= 10<sup>5</sup></p><p>·&nbsp;&nbsp;-10<sup>6</sup> &lt;= asteroids[i] &lt;= 10<sup>6</sup></p><p>·&nbsp;&nbsp;asteroids[i] != 0</p>

---

## My solutions

<!-- solvelogs:solutions:start -->
| Solution | Language | Runtime | Memory | Tests passed | Saved |
|---|---|---|---|---|---|
| [asteroid-collision.cpp](asteroid-collision.cpp) | C++ | 0.230 | 415.83 KiB | 133/133 | 2026-10-23 |
<!-- solvelogs:solutions:end -->
