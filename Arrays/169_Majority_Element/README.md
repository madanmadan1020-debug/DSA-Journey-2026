# LeetCode #169 - Majority Element

## Approach

Used the Boyer-Moore Voting Algorithm.

The algorithm maintains:
- `candidate` - current majority candidate
- `count` - voting balance

If the current element matches the candidate, the count increases.
Otherwise, the count decreases.

When the count becomes zero, the next element becomes the new candidate.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Concepts Learned

- Boyer-Moore Voting Algorithm
- Candidate and Count
- Cancellation Principle
- Linear Time Optimization
