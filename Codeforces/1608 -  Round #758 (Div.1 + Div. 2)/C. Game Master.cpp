/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100007
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	vector<int> vis(n , false) ;
	vector<pair<int,int>> a(n) , b(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		int x ;
		cin >> x ;
		a[i] = {x , i} ;
	}
	for(int i = 0 ; i < n ; i++)
	{
		int x ;
		cin >> x ;
		b[i] = {x , i} ;
	}
	sort(all(a)) ;
	sort(all(b)) ;
	vector<int> c(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		c[b[i].second] = i ;
	}
	int mn = n + 1 ;
	for(int i = n - 1 ; i >= 0 ; i--)
	{
		mn = min(mn , c[a[i].second]) ;
		vis[a[i].second] = true ;
		if(mn == i)
		{
			for(int j = 0 ; j < n ; j++)
			{
				cout << vis[j] ;
			}
			return ;
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
