## Problem Statement 
You are given two arrays a and b of length n. Array aa contains each odd integer from 1 to 2n in an arbitrary order, and array bb contains each even integer from 11 to 2n2n in an arbitrary order.

You can perform the following operation on those arrays:

1. choose one of the two arrays
2. pick an index ii from 11 to n-1n−1
3. swap the ii-th and the (i+1)(i+1)-th elements of the chosen array <br>
Compute the minimum number of operations needed to make array a lexicographically smaller than array b.
For two different arrays xx and yy of the same length nn, we say that x is lexicographically smaller than y if in the first position where xx and yy differ, the array xx has a smaller element than the corresponding element in yy.
### Format

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤104).

The first line of each test case contains a single integer n (1≤n≤10^5) — the length of the arrays.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤2n, all ai are odd and pairwise distinct) — array a.

The third line of each test case contains n integers b1,b2,…,bn (1≤bi≤2n, all bi are even and pairwise distinct) — array b.

It is guaranteed that the sum of n over all test cases does not exceed 10^5.

### Test Cases
Input:
3
2
3 1
4 2
3
5 3 1
2 4 6
5
7 5 9 1 3
2 4 6 10 8

Output:
0
2
3
