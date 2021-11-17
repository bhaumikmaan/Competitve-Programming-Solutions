/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 1000005
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	string s ;
	cin >> s ;
	s = '1' + s ;
	s += '9' ;
	int ans = 1 , i , j ;
	// cout << s << "\n" ;
	for(i = 0 ; i < s.length() - 1 ; )
	{
		for(j = i + 1 ; j < s.length() ; j++)
		{
			if(s[j] != '-')
			{
				break ;
			}
		}
		if(s[j] < s[i])
		{
			cout << 0 ;
			return ;
		}
		int d = s[j] - s[i] ;
		int a[10] ;
		for(int it = 0 ; it < 10 ; it++)
		{
			a[it] = 1 ;
			// cout << a[it] << " " ;
		}
		for(int x = i + 1 ; x < j ; x++)
		{
			for(int y = d - 1 ; y >= 0 ; y--)
			{
				a[y] += a[y + 1] ;
				a[y] %= mod ;
			}
		}
		// for(int it = 0 ; it < 10 ; it++)
		// {
			// cout << a[it] << " " ;
		// }
		ans *= a[0] ;
		ans %= mod ;
		i = j ;
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
