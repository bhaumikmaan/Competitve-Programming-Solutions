/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200100
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES" 
void solve()
{
	int n , k ;
	cin >> n >> k ;
	vi a(n) , b(n) ;
	for(int i = 0 ; i < n ; i++) 
	{
		cin >> a[i] ;
	}
	for(int i = 0 ; i < n ; i++) 
	{
		cin >> b[i] ;
	}
	vector<pair<int,int>> p(n) ;
	for(int i = 0 ; i < n ; i++) 
	{
		p[i] = {a[i] , b[i]} ;
	}
	sort(all(p)) ;
	for(int i = 0 ; i < n ; i++)
	{
		if(p[i].first <= k)
		{
			k += p[i].second ;
		}
		else
		{
			break ;
		}
	}
	cout << k ;
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
