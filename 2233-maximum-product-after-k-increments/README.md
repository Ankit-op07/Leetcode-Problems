<h2><a href="https://leetcode.com/problems/maximum-product-after-k-increments/">2233. Maximum Product After K Increments</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of non-negative integers <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">k</code>. In one operation, you may choose <strong style="user-select: auto;">any</strong> element from <code style="user-select: auto;">nums</code> and <strong style="user-select: auto;">increment</strong> it by <code style="user-select: auto;">1</code>.</p>

<p style="user-select: auto;">Return<em style="user-select: auto;"> the <strong style="user-select: auto;">maximum</strong> <strong style="user-select: auto;">product</strong> of </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> after <strong style="user-select: auto;">at most</strong> </em><code style="user-select: auto;">k</code><em style="user-select: auto;"> operations. </em>Since the answer may be very large, return it <b style="user-select: auto;">modulo</b> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>. Note that you should maximize the product before taking the modulo.&nbsp;</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,4], k = 5
<strong style="user-select: auto;">Output:</strong> 20
<strong style="user-select: auto;">Explanation:</strong> Increment the first number 5 times.
Now nums = [5, 4], with a product of 5 * 4 = 20.
It can be shown that 20 is maximum product possible, so we return 20.
Note that there may be other ways to increment nums to have the maximum product.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [6,3,3,2], k = 2
<strong style="user-select: auto;">Output:</strong> 216
<strong style="user-select: auto;">Explanation:</strong> Increment the second number 1 time and increment the fourth number 1 time.
Now nums = [6, 4, 3, 3], with a product of 6 * 4 * 3 * 3 = 216.
It can be shown that 216 is maximum product possible, so we return 216.
Note that there may be other ways to increment nums to have the maximum product.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length, k &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>