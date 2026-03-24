# Day 52 - Question 1 Solution

## 🎯 Problem
LCA in Binary Tree

## 💡 Approach
Find indices of the two values, mark all ancestors of the first node, then walk up from the second node until a marked ancestor is found – that node is the LCA.

## ⏱️ Time Complexity
O(n)

## 💾 Space Complexity
O(n)

