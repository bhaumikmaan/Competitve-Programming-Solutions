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
void solve( )
{
	string a , b ;
	cin >> a >> b ;
	if(a.length() != b.length())
	{
		cout << "NO" ;
	} 
	else
	{
		int n = a.length() ;
		int ca = 0 , cb = 0 ;
		for(int i = 0 ; i < n ; i++)
		{
			if(a[i] == '1')
			{
				ca = 1 ;
			}
			if(b[i] == '1')
			{
				cb = 1 ;
			}
		}
		if(ca == cb)
		{
			cout << "YES" ;
		}
		else
		{
			cout << "NO" ;
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
