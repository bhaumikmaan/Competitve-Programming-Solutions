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
	vector<int> a(n) ;
	bool flag = false ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	for(int i = 1 ; i < n ; i++)
	{
		if(!a[i] && !a[i - 1])
		{
			flag = true ;
		}
	}
	if(flag)
	{
		cout << -1 ;
	}
	else
	{
		int ans = 1 ;
		for(int i = 0 ; i < n ; i++)
		{
			if(a[i])
			{
				ans++ ;
				if(i && a[i - 1])
				{
					ans += 4 ;
				}
			}
		}
		cout << ans ;
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
