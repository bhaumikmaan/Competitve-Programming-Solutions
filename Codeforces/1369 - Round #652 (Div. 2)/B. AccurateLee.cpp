/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	string s ;
	cin >> s ;
	int z = 0 , o = 0 ;
	for(auto i:s)
	{
		if(i == '0')
		{
			z++ ;
		}
		else
		{
			o++ ;
		}
	}
	int zw1 = 0 , ow0 = 0 ; // z w/o 1 & o w/o 0
	for(auto i:s)
	{
		if(i == '0')
		{
			zw1++ ;
		}
		else
		{
			break ;
		}
	}
	reverse(all(s)) ;
	for(auto i:s)
	{
		if(i == '1')
		{
			ow0++ ;
		}
		else
		{
			break ;
		}
	}
	reverse(all(s)) ;
	// cout << z << " " << zw1 ;
	if(zw1 == z)
	{
		cout << s ;
	}
	else
	{
		for(int i = 0 ; i <= zw1 ; i++)
		{
			cout << 0 ;
		}
		for(int i = 1 ; i <= ow0 ; i++)
		{
			cout << 1 ;
		}
	}
	
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
        solve() ;
        cout << "\n" ;
    }
    return 0 ;
}    
