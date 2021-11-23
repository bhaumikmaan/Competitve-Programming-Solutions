/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100100
using namespace std ;
void solve()
{
	int a , b , c ;
	cin >> a >> b >> c ;
	string s = "" ;
	if(b)
	{
		s += "01" ;
		b-- ;
	}
	else
	{
		if(a)
		{
			s += "0" ;
		}
		else
		{
			s += "1" ;
		}
	}
	while(c--)
	{
		s += "1" ;
	}
	while(a--)
	{
		s = "0" + s ;
	}
	while(b--)
	{
		if(s.back() == '0')
		{
			s += "1" ;
		}
		else
		{
			s += "0" ;
		}
	}
	cout << s ;
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
