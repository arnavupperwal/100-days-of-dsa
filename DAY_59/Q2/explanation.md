# Day 59 - Question 2 Solution

## 🎯 Problem
Construct Binary Tree from Inorder and Postorder Traversal

## 💡 Approach
Recursively pick the last postorder element as root, find it in inorder to split left/right subtrees, and build them.

## ⏱️ Time Complexity
O(n^2) worst case (linear search each time)

## 💾 Space Complexity
O(n)

