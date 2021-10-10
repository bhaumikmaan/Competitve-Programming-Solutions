## Problem Statement 

Zibi is a competitive programming coach. There are nn competitors who want to be prepared well. The training contests are quite unusual – there are two people in a team, two problems, and each competitor will code exactly one of them. Of course, people in one team will code different problems.

Rules of scoring also aren't typical. The first problem is always an implementation problem: you have to implement some well-known algorithm very fast and the time of your typing is rated. The second one is an awful geometry task and you just have to get it accepted in reasonable time. Here the length and difficulty of your code are important. 
After that, Zibi will give some penalty points (possibly negative) for each solution and the final score of the team is the sum of them (the less the score is, the better).

We know that the ii-th competitor will always have score `xi`
  when he codes the first task and `yi`
  when he codes the second task. We can assume, that all competitors know each other's skills and during the contest distribute the problems in the way that
  minimizes their final score. Remember that each person codes exactly one problem in a contest.

Zibi wants all competitors to write a contest with each other. However, there are m
pairs of people who really don't like to cooperate and they definitely won't write a contest together. Still, the coach is goi
ng to conduct trainings for all possible pairs of people, such that the people in pair don't hate each other. The coach is interested for each parti
cipant, what will be his or her sum of scores of all teams he trained in?

### Format

Input

See Question Link

Output

Output n integers — the sum of scores for all participants in the same order as they appear in the input.

### Test Cases
Input:
```
3 2
1 2
2 3
1 3
1 2
2 3
```
Output:
```
3 0 3 
```

Input:
```
3 3
1 2
2 3
1 3
1 2
2 3
1 3
```
Output:
```
0 0 0 
```

Input:
```
5 3
-1 3
2 4
1 1
3 5
2 2
1 4
2 3
3 5
```
Output:
```
4 14 4 16 10 
```
