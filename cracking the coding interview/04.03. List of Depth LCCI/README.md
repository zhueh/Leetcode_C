# 题目

Given a binary tree, design an algorithm which creates a linked list of all the nodes at each depth (e.g., if you have a tree with depth D, you'll-【、 have D linked lists). Return a array containing all the linked lists.

 

Example:

Input: [1,2,3,4,5,null,7,8]

        1
       /  \ 
      2    3
     / \    \ 
    4   5    7
   /
  8

Output: [[1],[2,3],[4,5,7],[8]]

# 思路
很直觉的层序遍历，使用队列的方式，每dequeue一个节点就把它子节点进队。
利用先进先出的特性，可以保证层序遍历。
但因为最后返回的是二维链表，所以需要提前知道二叉树层数。是否有更简单的做法(TBD)。
// 本题暂未完成。