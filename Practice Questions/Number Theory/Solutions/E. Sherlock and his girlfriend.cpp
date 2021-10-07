/***	KNOWLEDGE IS POWER	***/

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
	if(n < 3)
	{
		cout << "1\n" ;
		for(int i = 0 ; i < n ; i++)
		{
			cout << "1 " ;
		}
	}
	else
	{
		cout << "2\n" ;
		for(int i = 2 ; i <= n + 1 ; i++)
		{
			bool flag = false ;
			for(int j = 2 ; j*j <= i ; j++)
			{
				if(i%j == 0)
				{
					flag = true ;
					break ; 
				} 
			}
			if(flag)
			{
				cout << "2 " ;
			}
			else
			{
				cout << "1 " ;
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
