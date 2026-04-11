# Day 70 - Question 2 Solution

## 🎯 Problem
Cheapest Flights Within K Stops

## 💡 Approach
Bellman‑Ford relaxed edges up to k+1 times, keeping the best price with at most k stops.

## ⏱️ Time Complexity
O(k·flightsSize)

## 💾 Space Complexity
O(n)

