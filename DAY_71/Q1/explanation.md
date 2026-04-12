# Day 71 - Question 1 Solution

## 🎯 Problem
Hash Table Using Quadratic Probing

## 💡 Approach
Use an array of size m, initialize with -1 for empty. For INSERT, probe with (h+i*i)%m until an empty slot. For SEARCH, probe until empty or key found, printing FOUND or NOT FOUND.

## ⏱️ Time Complexity
O(m) per operation in worst case

## 💾 Space Complexity
O(m)

