# Arrays

Array examples and problem-solving patterns.

## Basics

- `basics/traversal.cpp` — index-based and range-based traversal.
- `basics/insertion.cpp` — insert into a sorted prefix with spare capacity.
- `basics/deletion.cpp` — remove the first matching value by shifting.
- `basics/linear_search.cpp` — find the first matching index in unsorted input.
- `array_operations.cpp` — min/max, search, sum, and in-place reversal.

## Problems

- `problems/majority_element.cpp` — Boyer–Moore voting with candidate verification.
- `problems/pair_sum.cpp` — brute-force and sorted two-pointer approaches.
- `problems/maximum_subarray_sum.cpp` — Kadane's algorithm, including all-negative input.

Each source file is a standalone C++17 program. The two-pointer pair-sum method
requires its input to be sorted; returned positions are indices in that sorted
input. Complexity and other assumptions are documented in the source.
