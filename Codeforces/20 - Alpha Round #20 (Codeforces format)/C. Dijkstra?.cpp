/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 110000
using namespace std ;
vector<int> d(N , inf) , p(N , -1);
vector<pair<int,int>> gr[N] ;
void solve( )
{
	int n , m ;
	cin >> n >> m ;
	for(int i = 0 ; i < m ; i++)
	{
		int u , v , w ;
		cin >> u >> v >> w ;
		u-- , v-- ;
		gr[u].pb({v , w}) ;
		gr[v].pb({u , w}) ;
	}
	d[0] = 0 ;
	set<pair<int,int>> s ;
	s.insert({0 , 0}) ;
	while(!s.empty())
	{
		int it = s.begin()->second ;
		s.erase(s.begin()) ;
		for(int i = 0 ; i < gr[it].size() ; i++)
		{
			int st = gr[it][i].first ;
			int temp = d[it] + gr[it][i].second ;
			if(d[st] > temp)
			{
				s.erase({d[st] , st}) ;
				d[st] = temp ;
				p[st] = it ;
				s.insert({d[st] , st}) ;
			}
		}
	}
	if(p[n - 1] == -1)
	{
		cout << -1 ;
	}
	else
	{
		vector<int> ans ;
		for(int i = n - 1 ; i >= 0 ; i = p[i])
		{
			ans.pb(i) ;
		}
		reverse(all(ans)) ;
		for(auto i:ans)
		{
			cout << i + 1 << " " ;
		}
	}
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
