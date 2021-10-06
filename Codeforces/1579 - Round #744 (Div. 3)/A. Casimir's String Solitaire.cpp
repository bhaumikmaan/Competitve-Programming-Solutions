/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1579/problem/A
// Solution Link: https://codeforces.com/contest/1579/submission/130263525

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf 1e16
using namespace std ;
void solve( )
{
	string s ;
	cin >> s ;
	int a = 0 , b = 0 , c = 0 ;
	for(auto i:s)
	{
		if(i =='A')
		{
			a++ ;
		}
		else if(i == 'B')
		{
			b++ ;
		}
		else
		{
			c++ ;
		}
	}
	if(a + c == b)
	{
		cout << "YES" ;
	}
	else
	{
		cout << "NO" ;
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
