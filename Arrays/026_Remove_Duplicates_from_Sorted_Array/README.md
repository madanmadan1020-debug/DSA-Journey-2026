# LeetCode #26 - Remove Duplicates from Sorted Array

## Problem

Given a sorted array, remove the duplicates in-place such that each unique element appears only once.

## Approach

- Used the Two Pointer technique.
- Pointer `i` keeps track of the last unique element.
- Pointer `j` scans the array.
- Whenever a new element is found, it is copied to the next unique position.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Concepts Learned

- Two Pointers
- In-place array modification
- Edge case handling
