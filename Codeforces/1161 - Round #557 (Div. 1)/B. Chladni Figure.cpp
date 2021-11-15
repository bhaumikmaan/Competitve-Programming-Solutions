/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100110
using namespace std ;
void solve()
{
	int n , m ;
	cin >> n >> m ;
	set<pair<int,int>> s ;
	while(m--)
	{
		int x , y ;
		cin >> x >> y ;
		x-- , y-- ;
		s.insert(make_pair(x , y)) ;
		s.insert(make_pair(y , x)) ;
	}
	for(int i = 1 ; i < n ; i++)
	{
		if(!(n%i))
		{
			bool flag = true ;
			for(pair<int,int> j:s)
			{
				int x = (j.first + i)%n ; 
				int y = (j.second + i)%n ;
				if(!(s.count(make_pair(x , y))))
				{
					flag = false ;
					break ;
				}
			}
			if(flag)
			{
				cout << "Yes" ;
				return ;
			}
		}
	}
	cout << "No" ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
