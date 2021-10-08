/***  KNOWLEDGE IS POWER  ***/

// PROBLEM STATEMENT

// Theofanis has a riddle for you and if you manage to solve it, he will give you a Cypriot snack halloumi for free (Cypriot cheese).

// You are given an integer n. You need to find two integers l and r such that −1018≤l<r≤1018 and l+(l+1)+…+(r−1)+r=n.

// Input
// The first line contains a single integer t (1≤t≤104) — the number of test cases.

// The first and only line of each test case contains a single integer n (1≤n≤1018).

// Output
// For each test case, print the two integers l and r such that −10^18≤l<r≤10^18 and l+(l+1)+…+(r−1)+r=n.

// It can be proven that an answer always exists. If there are multiple answers, print any.

//*** SOLUTION LINK ***//

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        int r = n , l = - n + 1 ;
        cout << l << " " << r ;
        cout << "\n" ;
    }
    return 0 ;
}    	
