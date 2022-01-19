# 8. Remove duplicates from an unsorted linked list
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an unsorted linked list of <strong style="user-select: auto;">N</strong> nodes. The task is to remove duplicate&nbsp;elements from this&nbsp;unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all others duplicates are to be removed.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4
value[] = {5,2,2,4}
<strong style="user-select: auto;">Output: </strong>5 2 4<strong style="user-select: auto;">
Explanation:</strong>Given linked list elements are
5-&gt;2-&gt;2-&gt;4, in which 2 is repeated only.
So, we will delete the extra repeated
elements 2 from the linked list and the
resultant linked list will contain 5-&gt;2-&gt;4</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
value[] = {2,2,2,2,2}
<strong style="user-select: auto;">Output: </strong>2<strong style="user-select: auto;">
Explanation:</strong>Given linked list elements are
2-&gt;2-&gt;2-&gt;2-&gt;2, in which 2 is repeated. So,
we will delete the extra repeated elements
2 from the linked list and the resultant
linked list will contain only 2.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You have to complete the method&nbsp;<strong style="user-select: auto;">removeDuplicates</strong>() which takes <strong style="user-select: auto;">1</strong>&nbsp;argument: the <strong style="user-select: auto;">head</strong> of the linked list. &nbsp;Your function should&nbsp;return a pointer to a linked list with no duplicate element.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= size of linked lists &lt;= 10<sup style="user-select: auto;">6</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">0 &lt;= numbers in list &lt;= 10</span><sup style="user-select: auto;">4</sup></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>