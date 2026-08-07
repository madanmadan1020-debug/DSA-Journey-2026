# LeetCode #88 - Merge Sorted Array

## Problem

Merge two sorted arrays into `nums1` in-place.

## Approach

- Used three pointers.
- `i` points to the last valid element in `nums1`.
- `j` points to the last element in `nums2`.
- `k` points to the last position in `nums1`.
- Compare the elements at `i` and `j`.
- Place the larger element at position `k`.
- Move the corresponding pointer.
- If elements remain in `nums2`, copy them into `nums1`.

## Time Complexity

O(m + n)

## Space Complexity

O(1)

## Concepts Learned

- Three Pointers
- In-place Merging
- Edge Case Handling
