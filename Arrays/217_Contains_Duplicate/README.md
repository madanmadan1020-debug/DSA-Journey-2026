# LeetCode #217 - Contains Duplicate

## Approach

Implemented a hash table using linear probing for collision handling.

For each element:
1. Calculate its hash index.
2. If the position is occupied, compare the stored value.
3. If the value is the same, a duplicate is found.
4. If a different value is present, use linear probing to find the next position.
5. Store the value when an empty position is found.

## Collision Handling

Used Linear Probing.

## Time Complexity

Average: O(n)

## Space Complexity

O(n)

## Concepts Learned

- Hashing
- Hash Function
- Hash Table
- Collision
- Linear Probing
- In-place lookup
