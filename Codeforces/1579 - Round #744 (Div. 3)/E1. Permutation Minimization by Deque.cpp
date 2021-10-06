/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1579/problem/E
// Solution Link: https://codeforces.com/contest/1579/submission/130263553

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf 1e16
using namespace std ;
void solve( )
{
	int n ;
	cin >> n ;
	deque<int> dq ;
	for(int i = 0 ; i < n ; i++)
	{
		int x ;
		cin >> x ;
		if(dq.empty())
		{
			dq.push_front(x) ;
		}
		else
		{
			if(x < dq.front())
			{
				dq.push_front(x) ;
			}
			else
			{
				dq.pb(x) ;
			}
		}
	}
	while(!dq.empty())
	{
		cout << dq.front() << " " ;
		dq.pop_front() ;
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
