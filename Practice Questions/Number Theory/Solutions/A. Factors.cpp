/***	KNOWLEDGE IS POWER	***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
bool check(int n , int c)
{
	int cnt = 1 ;
	for(int i = 2 ; i <= n ; i++)
	{
		if(n%i == 0)
		{
			cnt++ ;
			if(cnt > c)
			{
				return false ;
			}
		}
	}
	if(cnt == c)
	{
		return true ;
	}
	return false ;
}
void solve( )
{
	int n ;
	cin >> n ;
	if(n == 1)
	{
		cout << 1 ;
	}
	else
	{
		for(int i = 2 ; i <= 5000 ; i++)
		{
			if(check(i , n))
			{
				cout << i ;
				return ;
			}
		}
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
