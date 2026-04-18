# Day 77 - Question 2 Solution

## 🎯 Problem
Critical Connections in a Network

## 💡 Approach
Brute‑force: for each edge remove it, run BFS to see if all nodes remain connected; if not, the edge is critical.

## ⏱️ Time Complexity
O(m*(n+m))

## 💾 Space Complexity
O(n+m)

