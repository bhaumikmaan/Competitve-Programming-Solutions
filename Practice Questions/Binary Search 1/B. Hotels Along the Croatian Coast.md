## Problem Statement 
There are N hotels along the beautiful Adriatic coast. Each hotel has its value in Euros.

Sroljo has won M Euros on the lottery. Now he wants to buy a sequence of consecutive hotels, such that the sum of the values of these consecutive hotels is as great as possible - but not greater than M.

You are to calculate this greatest possible total value.

### Format

Input
In the first line of the input there are integers N and M (1 ≤ N ≤ 300 000, 1 ≤ M < 231).

In the next line there are N natural numbers less than 106, representing the hotel values in the order they lie along the coast.

Output
Print the required number (it will be greater than 0 in all of the test data).

### Test Cases
Input:
5 12
2 1 3 4 5
Output:
12

Input:
4 9
7 3 5 6
Output:
8
