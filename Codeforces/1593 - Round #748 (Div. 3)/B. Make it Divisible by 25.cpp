/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve( )
{
	int n ;
	cin >> n ;
	int copy = n , cnt = 0 , ans = 50 ;
	while(copy)
	{
		if(copy%10 == 0)
		{
			break ;
		}
		else
		{
			copy /= 10 ;
			cnt++ ;
		}
	}
	if(n != 0)
	{
		copy /= 10 ;
		while(copy)
		{
			if(copy%10 == 0 || copy%10 == 5)
			{
				break ;
			}
			else
			{
				copy /= 10 ;
				cnt++ ;
			}
		}
		if(copy)
		{
			ans = min(ans , cnt) ;
		}
	}
	copy = n , cnt = 0 ;
	while(copy)
	{
		if(copy%10 == 5)
		{
			break ;
		}
		else
		{
			copy /= 10 ;
			cnt++ ;
		}
	}
	if(n != 0)
	{
		copy /= 10 ;
		while(copy)
		{
			if(copy%10 == 2 || copy%10 == 7)
			{
				break ;
			}
			else
			{
				copy /= 10 ;
				cnt++ ;
			}
		}
		if(copy)
		{
			ans = min(ans , cnt) ;
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
