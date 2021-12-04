/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 10000
using namespace std ;
int s[N] , f[N] , p[N] ;
void solve()
{
	int n , k ;
	cin >> n >> k ;
	for(int i = 0 ; i < n ; i++)
	{
		int x ;
		cin >> x ;
		x %= k ;
		f[x]++ ;
	}
	for(int i = 0 ; i < k ; i++)
	{
		int x = 1 ;
		while(f[i] > 0)
		{
			int y = min(x , f[i]) ;
			f[i] -= y ;
			x *= 2 ;
			int z = (y*i)%k ;
			int l ;
			for(l = 0 ; l < k ; l++)
			{
				if(s[l])
				{
					p[(l + z)%k] = 1 ;
				}
			}
			for(l = 0 ; l < k ; l++)
			{
				s[l] += p[l] ;
				p[l] = 0 ;
			}
			s[z] = 1 ;
		}
		if(s[0])
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
    // cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
