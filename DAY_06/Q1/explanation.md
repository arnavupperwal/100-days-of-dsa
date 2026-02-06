# Day 6 - Question 1 Solution

## 🎯 Problem
Remove Duplicates from Sorted Array

## 💡 Approach
Keep a pointer to the last unique element; when a new value is found, move it next to the last unique and update the pointer. Finally print the first pos+1 elements.

## ⏱️ Time Complexity
O(n)

## 💾 Space Complexity
O(1)

