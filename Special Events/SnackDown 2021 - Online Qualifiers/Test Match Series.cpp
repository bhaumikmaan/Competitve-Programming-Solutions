/***  KNOWLEDGE IS POWER  ***/

// PROBLEM STATEMENT
// A 5 match test series between India and England has just concluded.
// Every match could have ended either as a win for India, a win for England, or a draw. You know the result of all the matches. 
// Determine who won the series or if it ended in a draw.
// A team is said to have won the series if it wins strictly more test matches than the other team.

// SAMPLE INPUT 
// 3
// 0 1 2 1 0
// 0 1 2 1 2
// 2 2 2 2 1

// SAMPLE OUTPUT
// INDIA
// DRAW
// ENGLAND

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
	int e = 0 , i = 0 ;
	for(int j = 0 ; j < 5 ; j++)
	{
		int x ;
		cin >> x ;
		if(x == 1)
		{
			i++ ;
		}
		else if(x == 2)
		{
			e++ ;
		}
	}
	if(i == e)
	{
		cout << "DRAW" ;
	}
	else if(i > e)
	{
		cout << "INDIA" ;
	}
	else
	{
		cout << "ENGLAND" ;
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
