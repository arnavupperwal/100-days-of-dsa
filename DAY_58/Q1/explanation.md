# Day 58 - Question 1 Solution

## 🎯 Problem
Build Tree from Inorder & Preorder

## 💡 Approach
Recursively use preorder to pick root, split inorder into left/right, then print postorder without building explicit nodes.

## ⏱️ Time Complexity
O(n^2) worst case due to linear search in inorder

## 💾 Space Complexity
O(n) for arrays and recursion stack

