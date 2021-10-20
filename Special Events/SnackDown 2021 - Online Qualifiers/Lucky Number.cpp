/***  KNOWLEDGE IS POWER  ***/

// PROBLEM STATEMENT
// Chef buys a lottery ticket that has a 3 digit code associated with it. He thinks that digit 7 is his lucky digit and brings him good luck. 
// Chef will win some amount in the lottery if at least one of the digits of the lottery ticket is 7.
// Given three digits A, B, and C of the lottery ticket, tell whether Chef wins something or not?

// SAMPLE INPUT 
// 3
// 0 0 0
// 7 8 9
// 2 7 7

// SAMPLE OUTPUT
// NO
// YES
// YES

// SOLUTION

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve( )
{
	int  a , b,  c;
	cin >> a >> b >> c ;
	if(a == 7 || b == 7 || c == 7)
	{
		cout << "YES" ;
	}
	else
	{
		cout << "NO" ;
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve() ;
        cout << "\n" ;
    }
    return 0 ;
}    
