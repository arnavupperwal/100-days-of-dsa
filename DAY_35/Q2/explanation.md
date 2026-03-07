# Day 35 - Question 2 Solution

## 🎯 Problem
Implement Queue using Stacks

## 💡 Approach
Use two stacks (linked lists). Push to in. For pop/peek, if out empty, transfer all from in to out. Then pop/peek from out.

## ⏱️ Time Complexity
O(1) amortized per operation

## 💾 Space Complexity
O(n)

