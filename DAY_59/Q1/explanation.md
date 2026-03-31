# Day 59 - Question 1 Solution

## 🎯 Problem
Build Tree from Inorder & Postorder

## 💡 Approach
Recursively use the last element of postorder as root, split inorder at that root, and recurse on left/right subtrees, printing nodes in preorder.

## ⏱️ Time Complexity
O(n^2) worst case (searching inorder each call)

## 💾 Space Complexity
O(n) for recursion stack

