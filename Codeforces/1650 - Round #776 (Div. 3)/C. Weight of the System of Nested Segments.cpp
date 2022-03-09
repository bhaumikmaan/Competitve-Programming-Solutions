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
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
typedef vector<pair<int,int>> vpi ;
#define haan cout << "YES"
void solve()
{
	int n , m ;
	cin >> n >> m ;
	vector<pair<int,pair<int,int>>> a(m) ;
	for(auto &i:a)
	{
		cin >> i.second.first >> i.first ;
	} 
	for(int i = 0 ; i < m ; i++)
	{
		a[i].second.second = i + 1 ;
	}
	sort(all(a)) ;
	vpi ans ;
	int x = 0 ;
	for(auto &i:a)
	{
		ans.pb({i.second.first , i.second.second}) ;
		x += i.first ;
		if(ans.size() == 2*n)
		{
			break ;
		}
	}
	sort(all(ans)) ;
	cout << x << "\n" ;
	for(int i = 0 , j = 2*n - 1 ; i < n ; i++ , j--)
	{
		cout << ans[i].second << " " << ans[j].second << "\n" ;
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
