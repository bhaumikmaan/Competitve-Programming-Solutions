/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100000
using namespace std ;
void solve( )
{
	int n ;
	cin >> n ;
	int a[n + 1] ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
	}
	char x ;
	queue<int> bb , rr ;
	vector<int> b , r ; 
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> x ;
		if(x == 'B')
		{
			if(a[i] > 0)
			{
				b.pb(a[i]) ;
			}
		}
		else
		{
			r.pb(a[i]) ;
		}
	}
	sort(all(r)) ;
	sort(all(b)) ;
	for(auto i:r)
	{
		rr.push(i) ;
	}
	for(auto i:b)
	{
		bb.push(i) ;
	}
	for(int i = 1 ; i <= n ; i++)
	{
		if(bb.size())
		{
			if(bb.front() >= i)
			{
				bb.pop() ;
				continue ;
			}
		}
		if(rr.size())
		{
			if(rr.front() <= i)
			{
				rr.pop() ;
				continue ;
			}
		}
		cout << "NO" ;
		return ;
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
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
