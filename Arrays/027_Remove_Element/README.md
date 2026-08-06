# LeetCode #27 - Remove Element

## Problem

Remove all occurrences of a given value in-place and return the number of remaining elements.

## Approach

- Used the Two Pointer technique.
- Pointer `i` starts from the beginning.
- Pointer `j` starts from the end.
- When `nums[i]` equals the target value and `nums[j]` does not, replace `nums[i]` with `nums[j]`.
- Continue until the pointers meet.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Concepts Learned

- Two Pointers
- In-place array modification
- Edge case handling
