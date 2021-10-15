/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/OCT21B/problems/MEXPROB
// Solution Link: https://www.codechef.com/viewsolution/52443127

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100005
using namespace std ;
int mp[N] ;
void solve( )
{
	int n , k ;
	cin >> n >> k ;
	int a[n + 1] ;
	a[0] = n + 1 ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
	}
	int l = -1 , r = n ;
	while(l + 1 < r)
	{
		int m = (l + r)/2 ;
		int ans = 0 , mex = 0 , lef = 0 ;
		for(int i = 1 ; i <= n ; i++)
		{
			if(a[i] <= m)
			{
				if(mp[a[i]] == 0)
				{
					mex++ ;
				}
				mp[a[i]]++ ;
			}
			while(mex == m + 1 && (a[lef] > m || mp[a[lef]] > 1))
			{
				if(a[lef] <= m)
				{
					mp[a[lef]]-- ;
				}
				lef++ ;
			}
			ans += lef ;
		}
		for(int i = 0 ; i <= m ; i++)
		{
			mp[i] = 0 ;
		}
		ans = (n*(n+1))/2 - ans ;
		if(ans >= k)
		{
			r = m ;
		}
		else
		{
			l = m ;
		}
	}
	cout << r ;
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
