/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 10000007
using namespace std ;
void solve()
{
	int n , k ;
	cin >> n >> k ;
	vector<int> a(k) ;
	for(int i = 0 ; i < k ; i++)
	{
		cin >> a[i] ;
	}
	vector<int> g[n] ;
	for(int i = 0 ; i < n - 1 ; i++)
	{
		int x , y ;
		cin >> x >> y ;
		x -- , y -- ;
		g[x].pb(y) ;
		g[y].pb(x) ;
	}
	queue<int> q ;
	vector<int> w(n , 0) ;
	for(auto i:a)
	{
		q.push(i - 1) ;
		w[i - 1] = -1 ;
	}
	q.push(0) ;
	w[0] = 1 ;
	while(!q.empty())
	{
		int node = q.front() ;
		q.pop() ;
		for(auto i:g[node])
		{
			if(!w[i])
			{
				w[i] = w[node] ;
				q.push(i) ;
			}
		}
	}
	for(int i = 1 ; i < n ; i++)
	{
		if(g[i].size() == 1 && w[i] == 1)
		{
			cout << "YES" ;
			return ;
		}
	}
	cout << "NO" ;
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
