# 题目
Given a sorted (increasing order) array with unique integer elements, write an algo­rithm to create a binary search tree with minimal height.

Example:

Given sorted array: [-10,-3,0,5,9],

One possible answer is: [0,-3,9,-10,null,5]，which represents the following tree: 

          0 
         / \ 
       -3   9 
       /   / 
     -10  5 
# 思路（C）
题目提出最小高度的二叉树，那么对于根结点左右到子树节点数大致相等。
为方便解题，假设左右子树节点数相差不大于1。
同时题目给出的数组是升序数组，很自然的二叉树的根结点位于数字中间。
因此可以采用二分查找，递归的方式进行查找。
找到的最小高度子树即空节点作为二叉树最底层的左右子节点。