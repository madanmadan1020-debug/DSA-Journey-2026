# LeetCode #121 - Best Time to Buy and Sell Stock

## Problem

Given an array `prices` where `prices[i]` is the price of a stock on day `i`, find the maximum profit that can be achieved by buying one stock and selling it later.

---

## My Thought Process

### Step 1: Brute Force

Initially, I compared every possible buying day with every possible selling day.

- Time Complexity: **O(n²)**
- Space Complexity: **O(1)**

This solution passed most test cases but resulted in **Time Limit Exceeded (TLE)** for larger inputs.

### Step 2: Optimization (Greedy)

I observed that while scanning the array from left to right, I only need to remember:

- The minimum stock price seen so far.
- The maximum profit obtained so far.

For each day:

1. Update the minimum price if the current price is smaller.
2. Calculate the profit by selling today.
3. Update the maximum profit if the current profit is greater.

---

## Algorithm

1. Initialize `min` as the first day's index.
2. Traverse the array once.
3. Update the minimum price index whenever a smaller price is found.
4. Compute today's profit.
5. Update the maximum profit.
6. Return the maximum profit.

---

## Time Complexity

**O(n)**

---

## Space Complexity

**O(1)**

---

## Concepts Learned

- Greedy Algorithm
- Running Minimum
- Single Pass Traversal
- Time Complexity Optimization (O(n²) → O(n))
