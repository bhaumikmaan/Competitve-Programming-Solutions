/***  KNOWLEDGE IS POWER  ***/

// PROBLEM STATEMENT //
// Theofanis is starving, and he wants to eat his favorite food, sheftalia. However, he should first finish his homework. Can you help him with this problem?

// You have a perfect binary tree of 2k−1 nodes — a binary tree where all vertices i from 1 to 2k−1−1 have exactly two children: vertices 2i and 2i+1. Vertices from 2k−1 to 2k−1 don't have any children. You want to color its vertices with the 6 Rubik's cube colors (White, Green, Red, Blue, Orange and Yellow).

// Let's call a coloring good when all edges connect nodes with colors that are neighboring sides in the Rubik's cube.
// More formally:

// a white node can not be neighboring with white and yellow nodes;
// a yellow node can not be neighboring with white and yellow nodes;
// a green node can not be neighboring with green and blue nodes;
// a blue node can not be neighboring with green and blue nodes;
// a red node can not be neighboring with red and orange nodes;
// an orange node can not be neighboring with red and orange nodes;
// You want to calculate the number of the good colorings of the binary tree. Two colorings are considered different if at least one node is colored with a different color.

// The answer may be too large, so output the answer modulo 10^9+7.

// SOLUTION LINK // 
// https://codeforces.com/contest/1594/submission/131233767

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
int solve(int x , int y , int p)
{
    int ans = 1 ;
    x = x%p ;
    if(x == 0)
    {
        return 0 ;
    }
    while(y > 0)
    {
        if(y&1)
        {
            ans = (ans*x)%p ;
        }
        y = y>>1 ;
        x = (x*x)%p ;
    }
    return ans ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        int x = pow(2 , n) ;
        x -= 2 ;
        int ans = solve(4 , x , mod) ;
        ans = (ans * 6)%mod ;
        cout << ans ;
        cout << "\n" ;
    }
    return 0 ;
}    
