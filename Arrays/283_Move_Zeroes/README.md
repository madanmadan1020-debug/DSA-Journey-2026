# LeetCode #283 - Move Zeroes

## Problem

Given an integer array `nums`, move all `0`s to the end of it while maintaining the relative order of the non-zero elements.

The operation must be performed **in-place** without making a copy of the array.

---

## My Thought Process

Initially, I observed that only the non-zero elements need to retain their order.

Instead of swapping elements repeatedly, I used a pointer `j` to indicate the next position where a non-zero element should be placed.

After placing all non-zero elements at the beginning, I filled the remaining positions with zeros.

---

## Algorithm

1. Initialize a pointer `j = 0`.
2. Traverse the array using pointer `i`.
3. If `nums[i]` is non-zero:
   - Copy it to `nums[j]`.
   - Increment `j`.
4. After traversal, fill all remaining positions from `j` to the end with `0`.
5. Return the modified array.

---

## Time Complexity

O(n)

---

## Space Complexity

O(1)

---

## Concepts Learned

- Two Pointers
- In-place Array Modification
- Stable Ordering of Elements
- Linear Time Traversal
