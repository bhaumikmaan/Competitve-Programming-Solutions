## Problem Statement 
Greg has an array `a = a1, a2, ...,` an and m operations. Each operation looks as: `li, ri, di, (1 ≤ li ≤ ri ≤ n)`. To apply operation i to the array means to increase all array elements with numbers `li, li + 1, ...,` ri by value di.

Greg wrote down k queries on a piece of paper. Each query has the following form: `xi, yi, (1 ≤ xi ≤ yi ≤ m)`. That means that one should apply operations with numbers `xi, xi + 1, ..., yi` to the array.

Now Greg is wondering, what the array a will be after all the queries are executed. Help Greg.

### Format

Input

The first line contains integers n, m, k (1 ≤ n, m, k ≤ 10^5). The second line contains n integers: a1, a2, ..., an (0 ≤ ai ≤ 10^5) — the initial array.

Next m lines contain operations, the operation number i is written as three integers: li, ri, di, (1 ≤ li ≤ ri ≤ n), (0 ≤ di ≤ 10^5).

Next k lines contain the queries, the query number i is written as two integers: xi, yi, (1 ≤ xi ≤ yi ≤ m).

The numbers in the lines are separated by single spaces.

Output

On a single line print n integers a1, a2, ..., an — the array after executing all the queries. Separate the printed numbers by spaces.

Please, do not use the %lld specifier to read or write 64-bit integers in C++. It is preferred to use the cin, cout streams of the %I64d specifier.

### Test Cases
Input:
```
3 3 3
1 2 3
1 2 1
1 3 2
2 3 4
1 2
1 3
2 3
```
Output:
`9 18 17`

Input
```
1 1 1
1
1 1 1
1 1
```
Output
`2`

Input
```
4 3 6
1 2 3 4
1 2 1
2 3 2
3 4 4
1 2
1 3
2 3
1 2
1 3
2 3
```
Output
`5 18 31 20`
