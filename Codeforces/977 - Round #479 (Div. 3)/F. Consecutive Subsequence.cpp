/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200005
using namespace std ;
int a[N] ;
map<int,int> m ;
void solve( )
{
	int n ;
	cin >> n ;
	// int a[n + 1] ;
	// map<int,int> m ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
	}
	m[a[1]] = 1 ;
	int mxi = 1 , ind = 1 ;
	for(int i = 2 ; i <= n ; i++)
	{
		m[a[i]] = m[a[i] - 1] + 1 ; // DP state
		if(mxi < m[a[i]])
		{
			mxi = m[a[i]] ;
			ind = a[i] ;
		}
	}
	if(mxi == 1)
	{
		cout << "1\n1" ;
		return ;
	}
	vector<int> ans ;
	for(int i = n ; i ; i--)
	{
		if(a[i] == ind)
		{
			ans.pb(i) ;
			ind -- ;
		}
	}
	reverse(all(ans)) ;
	cout << mxi << "\n" ;
	for(auto i:ans)
	{
		cout << i << " " ; 
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
