# Day 60 - Question 2 Solution

## 🎯 Problem
Binary Tree Cameras

## 💡 Approach
Post‑order DFS returns state of each node; place camera when a child needs one, otherwise propagate coverage; finally add camera for root if still uncovered.

## ⏱️ Time Complexity
O(n)

## 💾 Space Complexity
O(h) (recursion stack)

