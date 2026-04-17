# Day 76 - Question 1 Solution

## 🎯 Problem
Count Connected Components (Undirected Graph)

## 💡 Approach
Build an adjacency matrix, run DFS from each unvisited vertex, and count how many times DFS starts – that is the number of connected components.

## ⏱️ Time Complexity
O(n^2 + m)

## 💾 Space Complexity
O(n^2)

