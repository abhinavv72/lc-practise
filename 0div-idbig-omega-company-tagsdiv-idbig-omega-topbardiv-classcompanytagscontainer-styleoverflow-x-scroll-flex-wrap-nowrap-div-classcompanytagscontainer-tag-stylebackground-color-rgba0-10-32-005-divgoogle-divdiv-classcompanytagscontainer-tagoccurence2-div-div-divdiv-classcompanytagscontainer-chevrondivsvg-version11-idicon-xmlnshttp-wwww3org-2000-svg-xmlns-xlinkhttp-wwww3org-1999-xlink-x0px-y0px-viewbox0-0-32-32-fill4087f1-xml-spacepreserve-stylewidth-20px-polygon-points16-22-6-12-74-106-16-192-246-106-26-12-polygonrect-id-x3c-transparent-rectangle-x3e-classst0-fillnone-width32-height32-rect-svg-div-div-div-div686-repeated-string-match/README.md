<h2><a href="https://leetcode.com/problems/repeated-string-match/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Google</div><div class="companyTagsContainer--tagOccurence">2</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>686. Repeated String Match</a></h2><h3>Medium</h3><hr><div><p>Given two strings <code>a</code> and <code>b</code>, return <em>the minimum number of times you should repeat string </em><code>a</code><em> so that string</em> <code>b</code> <em>is a substring of it</em>. If it is impossible for <code>b</code>​​​​​​ to be a substring of <code>a</code> after repeating it, return <code>-1</code>.</p>

<p><strong>Notice:</strong> string <code>"abc"</code> repeated 0 times is <code>""</code>, repeated 1 time is <code>"abc"</code> and repeated 2 times is <code>"abcabc"</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> a = "abcd", b = "cdabcdab"
<strong>Output:</strong> 3
<strong>Explanation:</strong> We return 3 because by repeating a three times "ab<strong>cdabcdab</strong>cd", b is a substring of it.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> a = "a", b = "aa"
<strong>Output:</strong> 2
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= a.length, b.length &lt;= 10<sup>4</sup></code></li>
	<li><code>a</code> and <code>b</code> consist of lowercase English letters.</li>
</ul>
</div>