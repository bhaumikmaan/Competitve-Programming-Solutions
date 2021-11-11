/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100010
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = i + 1 ; j < n ; j++)
		{
			int d = j - i ;
			d *= 2 ;
			if(d == n)
			{
				cout << 0 ;
			}
			else if(d < n)
			{
				cout << 1 ;
			}
			else
			{
				cout << -1 ;
			}
			cout << " " ;
		}
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
