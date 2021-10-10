/** KNOWLEDGE IS POWER  **/

// PROBLEM STATEMENT
// Monocarp is playing a computer game. Now he wants to complete the first level of this game.

// A level is a rectangular grid of 2 rows and n columns. Monocarp controls a character, which starts in cell (1,1) — at the intersection of the 1-st row and the 1-st column.

// Monocarp's character can move from one cell to another in one step if the cells are adjacent by side and/or corner. Formally, it is possible to move from cell (x1,y1) to cell (x2,y2) in one step if |x1−x2|≤1 and |y1−y2|≤1. Obviously, it is prohibited to go outside the grid.

// There are traps in some cells. If Monocarp's character finds himself in such a cell, he dies, and the game ends.

// To complete a level, Monocarp's character should reach cell (2,n) — at the intersection of row 2 and column n.

// Help Monocarp determine if it is possible to complete the level.

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	string a , b ;
	cin >> a >> b ;
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] == b[i] && a[i] == '1')
		{
			cout << "NO" ;
			return ;
		}
	}
	cout << "YES" ;
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
