# Day 69 - Question 2 Solution

## 🎯 Problem
Network Delay Time

## 💡 Approach
Use O(n^2) Dijkstra with adjacency matrix: initialize distances, repeatedly pick the closest unvisited node and relax its outgoing edges. Return the maximum distance or -1 if any node is unreachable.

## ⏱️ Time Complexity
O(n^2)

## 💾 Space Complexity
O(n^2)

