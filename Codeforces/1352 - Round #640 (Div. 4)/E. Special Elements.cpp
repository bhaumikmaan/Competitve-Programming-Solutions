/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 8010
using namespace std ;
int a[N] , pre[N] , m[N] ;
void solve()
{
	int n ;
	cin >> n ;
	memset(m , 0 , sizeof(m)) ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
		m[a[i]]++ ;
	}
	pre[0] = 0 ;
	for(int i = 1 ; i <= n ; i++)
	{
		pre[i] = pre[i - 1] + a[i] ;
	}
	int ans = 0 ;
	for(int i = 2 ; i <= n ; i++)
	{
		for(int j = 1 ; j < i ; j++)
		{
			int c = pre[i] - pre[j - 1] ;
			if(c <= n)
			{
				ans += m[c] ;
				m[c] = 0 ;
			}
		}
	}
	cout << ans ;
	
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
