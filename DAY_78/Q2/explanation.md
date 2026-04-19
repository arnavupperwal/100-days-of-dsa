# Day 78 - Question 2 Solution

## 🎯 Problem
Articulation Points (GFG)

## 💡 Approach
DFS with discovery/low times; a vertex is an articulation point if it is root with >1 child or a non-root where low[child] >= disc[u].

## ⏱️ Time Complexity
O(V+E)

## 💾 Space Complexity
O(V+E)

