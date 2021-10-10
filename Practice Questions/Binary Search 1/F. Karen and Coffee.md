## Problem Statement 
To stay woke and attentive during classes, Karen needs some coffee!


Karen, a coffee aficionado, wants to know the optimal temperature for brewing the perfect cup of coffee. Indeed, she has spent some time reading several recipe books, including the universally acclaimed "The Art of the Covfefe".

She knows n coffee recipes. The i-th recipe suggests that coffee should be brewed between li and ri degrees, inclusive, to achieve the optimal taste.

Karen thinks that a temperature is admissible if at least k recipes recommend it.

Karen has a rather fickle mind, and so she asks q questions. In each question, given that she only wants to prepare coffee with a temperature between a and b, inclusive, can you tell her how many admissible integer temperatures fall within the range?
### Format

Input

The first line of input contains three integers, `n, k (1 ≤ k ≤ n ≤ 200000)`, and `q (1 ≤ q ≤ 200000)`, the number of recipes, 
the minimum number of recipes a certain temperature must be recommended by to be admissible, and the number of questions Karen has, respectively.

The next `n` lines describe the recipes. Specifically, the i-th line among these contains two integers `li and ri (1 ≤ li ≤ ri ≤ 200000)`, 
describing that the i-th recipe suggests that the coffee be brewed between li and ri degrees, inclusive.

The next `q` lines describe the questions. Each of these lines contains `a and b, (1 ≤ a ≤ b ≤ 200000)`, describing that she wants to know the number of admissible integer temperatures between a and b degrees, inclusive.

Output

For each question, output a single integer on a line by itself, the number of admissible integer temperatures between a and b degrees, inclusive.


### Test Cases
Input:
```
3 2 4
91 94
92 97
97 99
92 94
93 97
95 96
90 100
```
Output:
```
3
3
0
4
```

Input
```
2 1 1
1 1
200000 200000
90 100
```
Output
```
0
```
