# Day 80 - Question 2 Solution

## 🎯 Problem
Find the City With the Smallest Number of Neighbors

## 💡 Approach
Use Floyd‑Warshall to compute all‑pairs shortest paths, then count reachable cities within the threshold for each city and pick the smallest count (ties broken by larger index).

## ⏱️ Time Complexity
O(n³)

## 💾 Space Complexity
O(n²)

